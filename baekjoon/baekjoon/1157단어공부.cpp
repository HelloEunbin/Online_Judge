#include<iostream>
#include<string>
using namespace std;

int main() {

	int arr[27] = { 0, };

	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++) { //알파벳 하나씩 나올 때 마다 arr배열에 증가시킴
		if (str[i] < 97) {
			arr[str[i] - 'A'] += 1;
		}
		else {
			arr[str[i] - 'a'] += 1;
		}
	}
	int max = 0, flag = 0, many; //max는 가장 많은 것 찾기, flag는 중복인 수, many는 가장 많은 알파벳의 인덱스

	for (int i = 0; i < 27; i++) {
		if (max < arr[i]) {
			max = arr[i];
			many = i;
			flag = 0;
		}
		else if (max == arr[i])
			flag = 1;
	}
	if (flag == 1)
		printf("?");
	else
		printf("%c", many + 'A'); //cout << char(many + 'A'); char출력은 char()로 묶어서 출력하면 됨

	return 0;
}