#include<iostream>

using namespace std;

int main() {

	int n;
	int flag = 0;
	int cnt = 0;

	while (true) {
		cin >> n;
		if (n == 0)
			break;
		else {
			if (n == 1) cout << "1\n"; //1�̶�� �׳� 1 ��� �ѱ���.
			else {
				for (int i = n+1; i <= 2 * n; i++) { //����: n���� ũ�� 2n���� �۰ų� ���� ��
					for (int j = 2; j*j <= i; j++) {
						if (i%j == 0) {
							flag = 1;
							break;
						}
					}
					if (flag == 0)
						cnt ++;
					flag = 0;
				}
				cout << cnt << "\n";
				cnt = 0;
			}
		}
	}
	
	return 0;
}