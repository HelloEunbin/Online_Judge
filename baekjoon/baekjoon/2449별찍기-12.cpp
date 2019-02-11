#include<iostream>

using namespace std;

int main() {

	int N;
	cin >> N;

	int i, j, k;
	for (i = 1; i <= N; i++) {
		for (j = 1; j <= N-i; j++) //N-i하기위해 i=1부터
			cout << " ";
		for (k = j; k <= N; k++)
			cout << "*";
		cout << "\n";
	}
	for (i = 1; i <= N - 1; i++) {
		for (j = 1; j <= i; j++)
			cout << " ";
		for (k = j; k <= N; k++)
			cout << "*";
		cout << "\n";
	}

	return 0;
}