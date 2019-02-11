#include<iostream>

using namespace std;

int main() {

	int N;
	cin >> N;

	int i, j;
	for (i = 0; i < N; i++) {
		for (j=0; j<=i; j++)
			cout << "*";
		cout << "\n";
	}
	for (i = N-1; i > 0; i--) {
		for (j=i;j>0;j--)
			cout << "*";
		cout << "\n";
	}

	return 0;
}