#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

bool compare(string &a, string &b) { //string�� �����ش�.
	if (a.length() == b.length()) {
		for (int i = 0; i < a.length(); i++) { //string�� �ܾ� �ϳ��ϳ��� ���ϰ� ���� ��
			if (a[i] != b[i])
				return a[i] < b[i]; //��������(�ڰ� ũ��)�ϰ� ������ �ε�ȣ ������ <, ��������(���� ũ��)�ϰ� ������ �ε�ȣ ������ >
		}
	}
	return a.length() < b.length(); //��������(�ڰ� ũ��)�ϰ� ������ �ε�ȣ ������ <, ��������(���� ũ��)�ϰ� ������ �ε�ȣ ������ >
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