#include<iostream>

using namespace std;

int main() {

	int num;
	cin >> num;

	int i, j;

	for (i = 1; i < num; i++) {
		for (j = 1; j <= num - i; j++)
			cout << " ";
		cout << "*";

		for (; j < num + i - 2; j++)
			cout << " ";
		if (i != 1) //1일 때두 개 찍히는 것을 방지
			cout << "*";
		cout << "\n";
	}
	for (int i = 1; i < num*2; i++) {
		cout << "*";
	}
	return 0;
}