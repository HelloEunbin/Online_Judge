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

		alpa[str[0] - 'a'] = 1; //'a'�� �������ν� a�� 0(����)���� ��޵�
		for (int i = 1; i < str.length(); i++) {
			if (str[i - 1] == str[i])
				flag = 1;
			if (flag == 0) {
				if (alpa[str[i] - 'a'] == 0)
					alpa[str[i] - 'a'] = 1;
				else { //�̹� ������ ���Դµ�, ���� ���ڿ� �ٸ� ���ڴ�!
					check = 1;
					break; //����
				}
			}
			flag = 0;
		}
		if (check == 0)
			cnt++;
		check = 0;
		memset(alpa, 0, sizeof(alpa)); //�迭 �ʱ�ȭ
	}
	cout << cnt;
	return 0;
}