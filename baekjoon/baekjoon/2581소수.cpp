#include<iostream>

using namespace std;

int main() {

	int M, N;
	cin >> M >> N;

	int sum = 0;
	int min = 0;
	int flag = 0;

	if (M == 1) M = 2; //M�� 1�̶�� 2�� �ٲ��ش�.
	for (int i = M; i <= N; i++) {
		for (int j = 2; j*j <= i; j++) { //j*j<=1�� ���༭ �ð��� ���� �����Ű��, ������
			if (i%j == 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) { //����� ������
			sum += i;
			if (min == 0) //�ּҰ��� �������� �ʾ��� ��
				min = i;
		}
		flag = 0;
	}
	if (sum == 0)
		cout << "-1\n";

	else
		cout << sum << "\n" << min;

	return 0;
}