#include<iostream>
#include<string>
using namespace std;

int main() {

	int arr[27] = { 0, };

	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++) { //���ĺ� �ϳ��� ���� �� ���� arr�迭�� ������Ŵ
		if (str[i] < 97) {
			arr[str[i] - 'A'] += 1;
		}
		else {
			arr[str[i] - 'a'] += 1;
		}
	}
	int max = 0, flag = 0, many; //max�� ���� ���� �� ã��, flag�� �ߺ��� ��, many�� ���� ���� ���ĺ��� �ε���

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
		printf("%c", many + 'A'); //cout << char(many + 'A'); char����� char()�� ��� ����ϸ� ��

	return 0;
}