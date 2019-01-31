#include<stdio.h>
#pragma warning(disable:4996)



int main() {

	int C;
	scanf("%d", &C);

	int N, L;
	int sum, cnt;

	while (C--) {
		int cost[1001] = { 0 };
		double min = 1e20; //�ʱ�ȭ�� ������ ���~

		scanf("%d %d", &N, &L);
		for (int i = 0; i < N; i++) {
			scanf("%d",&cost[i]);
		}

		for (int i = 0,j; i < N - L + 1; i++) {
			for (j = i, sum = 0, cnt = 1; j < L + i - 1; j++, cnt++) { //sum=0,cnt=1�� �ʱ�ȭ, sum�� �ּ���(L)-1��ŭ�� �����ش�. ex) L=2, 1 2 3�̶��
				sum += cost[j]; //ex) sum = 1;
			}

			for (; j < N; j++, cnt++) {
				sum += cost[j]; //ó���� �ּ������� ���ϰ�, �� ������ j<N���� �����ش�. ex)sum = 3, ���� sum = 6
				if (min > (double)sum / cnt)
					min = (double)sum / cnt;
			}
		}
		printf("%.10lf\n", min);
	}
	return 0;
}