#include<iostream>

using namespace std;

int main() {
	int num;
	cin >> num;
	for (int i = num; i > 0; i--) { //총 num번 돌리기
		for (int j = i-1; j > 0; j--) { //빈칸은 4,3,2,1순
			cout << " ";
		}
		for (int k = 2 * i - 1; k<=2 * num - 1; k++) { //*은 1,3,5,7,9순
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}
