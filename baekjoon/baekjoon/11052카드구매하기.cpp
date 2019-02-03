#include<iostream>

using namespace std;

int main() {

	int N;

	cin >> N;
	int card[1001] = { 0, };

	int max;
	cin >> card[1]; //1장 최대
	for (int i = 2; i <= N; i++) {
		cin >> max;
		for (int j = i-1; j >= i-j; j--) { //2장일 때 최대는 2 or 1+1, 3장일 때 최대는 3 or 2+1(1+1+1은 2의 최대를 알기 때문에 2+1로 됨), 4장일 때 최대는 4,3+1,2+2
			if (card[j] + card[i - j] > max)
				max = card[j] + card[i - j];
		}
		card[i] = max;
	}aa
	cout << card[N];

	return 0;
}