#include<iostream>
#include<string>

using namespace std;

int main() {

	int a, b, c;
	string str;
	int arr[10] = { 0, };

	cin >> a >> b >> c;

	int mul = a * b * c;
	str = to_string(mul); //숫자를 문자로

	for (int i = 0; i < str.length(); i++) {
		int num = str[i]-'0'; //char인 숫자를 int로 -> -'0'(아스키코드 48)
		arr[num] += 1;
	}
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << "\n";
	}

	return 0;
}