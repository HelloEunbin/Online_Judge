#include<iostream>
#include<cstring>

using namespace std;

int main() {

	int t;
	int num;
	int result;
	int student[101] = { 0, }; //�迭 �ε����� �� ����

	cin >> t;

	for (int i = 1; i <= t; i++) {
		int max = 0;
		cin >> num; //�׽�Ʈ���̽� ��ȣ �ӽ� �Է¹���
		for (int j = 0; j < 1000; j++) {
			cin >> num;
			student[num] += 1;
		}

		for (int j = 0; j <= 100; j++) {
			if (student[j] >= max) { //max�� �� ������ ���� Ƚ��
				max = student[j];
				result = j;
			}
		}
		printf("#%d %d\n", i, result);
		memset(student, 0, sizeof(student));

	}
	return 0;
}