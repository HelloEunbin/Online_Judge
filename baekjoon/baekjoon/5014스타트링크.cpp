#include<iostream>

using namespace std;
int main() {

	int f, s, g, u, d;

	cin >> f >> s >> g >> u >> d; //��ü ��, ���� �ִ� ��, ������ ��, up�ϴ� ��, down�ϴ� ��

	int cnt = 0;

	if (s < g) { //���� �ִ� ���� ������ ������ �ؿ� ���� ��
		if (u == 0) { //up�� 0�̸� �ȵ�
			cout << "use the stairs";
			return 0;
		}
		while (s < g) { //���� �ִ� ���� ������ ������ Ŀ�� �� ����
			s += u; //up!
			cnt++; //���ִ� ��ŭ cnt++
			if (s == g) { //���ϴ� �������� �ٷ� ����
				cout << cnt;
				return 0;
			}
		}
		while (s > g) { //������ ���� �ٽ� ������ ���� �� ������ down
			s -= d; //down~
			cnt++; //���ִ� ��ŭ cnt++
			if (s == g) { //�ٿ��ϴ� �������� �ٷ� ����
				cout << cnt;
				return 0;
			}
		}
		cout << "use the stairs"; //������ s==g�� �ȵǾ��� ��
	}
	else if (s > g) { //���� �ݴ�������� ����
		if (d == 0) {
			cout << "use the stairs";
			return 0;
		}
		while (s > g) {
			s -= d;
			cnt++;
			if (s == g) {
				cout << cnt;
				return 0;
			}
		}
		while (s < g) {
			s += u;
			cnt++;
			if (s == g) {
				cout << cnt;
				return 0;
			}
		}

		cout << "use the stairs";
	}
	else { //���� ��
		cout << cnt;
	}
	return 0;

}