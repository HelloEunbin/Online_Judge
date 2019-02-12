#include<iostream>
#include<string>

using namespace std;

int main() {

	string str;

	cin >> str;

	int time = 0;

	for (int i = 0; i < str.length(); i++) {
		int a = (str[i] - 'A') / 3;
		if (((a == 6 || a == 7) && (str[i]-'A') % 3 == 0) || a >= 8) //7번과 9번이 알파벳 4개
			time += a + 1+1; //1만 더해주고 나머지 빈 칸 +1
		else
			time += a + 2+1; //2 더해주고 나머지 빈 칸 +1
	}
	cout << time;
	return 0;
}