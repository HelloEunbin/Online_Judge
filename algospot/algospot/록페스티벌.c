#include<stdio.h>
#pragma warning(disable:4996)



int main() {

	int C;
	scanf("%d", &C);

	int N, L;
	int sum, cnt;

	while (C--) {
		int cost[1001] = { 0 };
		double min = 1e20; //초기화를 잘하자 띠뺭~

		scanf("%d %d", &N, &L);
		for (int i = 0; i < N; i++) {
			scanf("%d",&cost[i]);
		}

		for (int i = 0,j; i < N - L + 1; i++) {
			for (j = i, sum = 0, cnt = 1; j < L + i - 1; j++, cnt++) { //sum=0,cnt=1로 초기화, sum을 최소팀(L)-1만큼만 더해준다. ex) L=2, 1 2 3이라면
				sum += cost[j]; //ex) sum = 1;
			}

			for (; j < N; j++, cnt++) {
				sum += cost[j]; //처음엔 최소팀까지 더하고, 그 다음은 j<N까지 더해준다. ex)sum = 3, 다음 sum = 6
				if (min > (double)sum / cnt)
					min = (double)sum / cnt;
			}
		}
		printf("%.10lf\n", min);
	}
	return 0;
}