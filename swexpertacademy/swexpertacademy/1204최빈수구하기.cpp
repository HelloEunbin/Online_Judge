#include<iostream>
#include<cstring>

using namespace std;

int main() {

	int t;
	int num;
	int result;
	int student[101] = { 0, }; //배열 인덱스가 각 점수

	cin >> t;

	for (int i = 1; i <= t; i++) {
		int max = 0;
		cin >> num; //테스트케이스 번호 임시 입력받음
		for (int j = 0; j < 1000; j++) {
			cin >> num;
			student[num] += 1;
		}

		for (int j = 0; j <= 100; j++) {
			if (student[j] >= max) { //max는 그 점수가 나온 횟수
				max = student[j];
				result = j;
			}
		}
		printf("#%d %d\n", i, result);
		memset(student, 0, sizeof(student));

	}
	return 0;
}