#include<iostream>
#include<string>

using namespace std;

int main() {

	string str1;
	string str2;

	cin >> str1 >> str2;

	int big = 0;

	for (int i = str1.length() - 1; i >= 0; i--) {
		if (str1[i] > str2[i]) {
			for (int i = str1.length() - 1; i >= 0; i--) {
				cout << str1[i];
			}
			break;
		}
		else if (str1[i] < str2[i]) {
			for (int i = str1.length() - 1; i >= 0; i--) {
				cout << str2[i];
			}
			break;
		}
	}
	
	return 0;
}