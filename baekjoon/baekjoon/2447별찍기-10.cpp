#include<iostream>
#include<cstring>

using namespace std;

char arr[2188][2188]; //1. 전역에 넣고

void star(int x, int y, int num) {
	int div = num / 3;

	if (num == 1) {
		arr[y][x] = '*'; //num=9일때, num=3일 때 한번 하고 바로 옆으로 찍기 위해서
	}
	else {
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (i != 1 || j != 1) //가운데 5번째가 빈 모양
					star(x + (div*j), y + (div*i), div); //x,y를 찍어주는이유는 배열 [y][x]에 찍어주기 위해서
			}
		}
	}
}

int main() {

	int num;
	cin >> num;

	memset(arr, ' ', sizeof(arr)); //2. 같은 문자로 초기화 하는게 더 낫다.

	star(0, 0, num);

	for (int i = 0; i < num; i++) {
		for (int j = 0; j < num; j++) {
			cout << arr[i][j];
		}
		cout << "\n";
	}

	return 0;
}