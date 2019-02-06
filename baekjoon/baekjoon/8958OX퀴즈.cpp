#include<iostream>
#include<string>

using namespace std;

int main() {

	int test;
	string str;

	cin >> test;
	while(test--) {
		cin >> str;
		int cnt = 0;
		int score = 0;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == 'O') {
				cnt++;
				score += cnt;
			}
			else
				cnt = 0;
		}
		cout << score << "\n";
	}
	return 0;
}