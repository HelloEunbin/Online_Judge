#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main() {

	int alpa[27] = { 0, };

	int N;
	cin >> N;

	string str;
	int cnt = 0;

	while (N--) {
		cin >> str;
		int flag = 0;
		int check = 0;

		alpa[str[0] - 'a'] = 1; //'a'를 빼줌으로써 a가 0(숫자)으로 취급됨
		for (int i = 1; i < str.length(); i++) {
			if (str[i - 1] == str[i])
				flag = 1;
			if (flag == 0) {
				if (alpa[str[i] - 'a'] == 0)
					alpa[str[i] - 'a'] = 1;
				else { //이미 이전에 나왔는데, 앞의 문자와 다른 문자다!
					check = 1;
					break; //멈춤
				}
			}
			flag = 0;
		}
		if (check == 0)
			cnt++;
		check = 0;
		memset(alpa, 0, sizeof(alpa)); //배열 초기화
	}
	cout << cnt;
	return 0;
}