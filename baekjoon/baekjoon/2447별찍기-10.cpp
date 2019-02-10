#include<iostream>
#include<cstring>

using namespace std;

char arr[2188][2188]; //1. ������ �ְ�

void star(int x, int y, int num) {
	int div = num / 3;

	if (num == 1) {
		arr[y][x] = '*'; //num=9�϶�, num=3�� �� �ѹ� �ϰ� �ٷ� ������ ��� ���ؼ�
	}
	else {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (i != 1 || j != 1) //��� 5��°�� �� ���
					star(x + (div*j), y + (div*i), div); //x,y�� ����ִ������� �迭 [y][x]�� ����ֱ� ���ؼ�
			}
		}
	}
}

int main() {

	int num;
	cin >> num;

	memset(arr, ' ', sizeof(arr)); //2. ���� ���ڷ� �ʱ�ȭ �ϴ°� �� ����.

	star(0, 0, num);

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			cout << arr[i][j];
		}
		cout << "\n";
	}

	return 0;
}