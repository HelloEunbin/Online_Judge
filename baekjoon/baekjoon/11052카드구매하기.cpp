#include<iostream>

using namespace std;

int main() {

	int N;

	cin >> N;
	int card[1001] = { 0, };

	int max;
	cin >> card[1]; //1�� �ִ�
	for (int i = 2; i <= N; i++) {
		cin >> max;
		for (int j = i-1; j >= i-j; j--) { //2���� �� �ִ�� 2 or 1+1, 3���� �� �ִ�� 3 or 2+1(1+1+1�� 2�� �ִ븦 �˱� ������ 2+1�� ��), 4���� �� �ִ�� 4,3+1,2+2
			if (card[j] + card[i - j] > max)
				max = card[j] + card[i - j];
		}
		card[i] = max;
	}aa
	cout << card[N];

	return 0;
}