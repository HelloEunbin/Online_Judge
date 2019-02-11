#include<iostream>
#include<cstring>

using namespace std;

char arr[3074][6145]; //y���� �� ��

void star(int x, int y, int num) {
	
	if (num == 3) { //���� ���
		arr[x][y] = arr[x + 1][y - 1] = arr[x + 1][y + 1] = arr[x + 2][y - 2] = arr[x + 2][y - 1] = arr[x + 2][y] = arr[x + 2][y] = arr[x + 2][y + 1] = arr[x + 2][y + 2] = '*';
	}
	else {
		star(x, y, num/2);
		star(x + num/2, y - (num / 2), num/2);
		star(x + num / 2, y + (num / 2), num/2);
	}
}

int main() {

	int num;
	cin >> num;

	memset(arr, ' ', sizeof(arr));

	star(0, num, num);

	for (int i = 0; i < num; i++) {
		for (int j = 1; j < num*2; j++) { //���� �� ����� �ִ� �� ���ֱ� ���� 1���� ����
			cout << arr[i][j];
		}
		cout << "\n";
	}

	return 0;
}