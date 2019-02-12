#include<iostream>

using namespace std;

int main() {

	int num;
	cin >> num;

	int i, j;

	for (i = 1; i <= num; i++) {
		for (j = 1; j <= num - i; j++)
			cout << " ";

		int cnt = j % 2;
		for (; j < num + i; j++) {
			if (j % 2 == cnt)
				cout << "*";
			else
				cout << " ";
		}
		cout << "\n";
	}
	return 0;
}