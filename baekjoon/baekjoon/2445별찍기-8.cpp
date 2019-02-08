#include<iostream>

using namespace std;

int main() {

	int num;
	cin >> num;

	int i, j, k;
	for (i = 1; i <= num; i++) {
		for (j = 1; j <= i; j++) {
			cout << "*";
		}
		for (k = j; k <= num * 2 - i; k++) {
			cout << " ";
		}
		for (j = k; j <= num * 2; j++) {
			cout << "*";
		}
		cout << "\n";
	}
	for (i = num - 1; i >= 0; i--) {
		for (j = 1; j <= i; j++) {
			cout << "*";
		}
		for (k = j; k <= num * 2 - i; k++) {
			cout << " ";
		}
		for (j = k; j <= num * 2; j++) {
			cout << "*";
		}
		cout << "\n";
	}
	return 0;
}