#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

bool compare(string &a, string &b) { //string을 비교해준다.
	if (a.length() == b.length()) {
		for (int i = 0; i < a.length(); i++) { //string의 단어 하나하나를 비교하고 싶을 때
			if (a[i] != b[i])
				return a[i] < b[i]; //오름차순(뒤가 크게)하고 싶으면 부등호 방향을 <, 내림차순(앞이 크게)하고 싶으면 부등호 방향을 >
		}
	}
	return a.length() < b.length(); //오름차순(뒤가 크게)하고 싶으면 부등호 방향을 <, 내림차순(앞이 크게)하고 싶으면 부등호 방향을 >
}
int main() {

	int N;
	cin >> N;

	string str[20000];

	for (int i = 0; i < N; i++) {
		cin >> str[i];
	}

	sort(str, str + N, compare);

	for (int i = 0; i < N; i++) {
		if (str[i] != str[i + 1])
			cout << str[i] << "\n";
	}
	return 0;
}