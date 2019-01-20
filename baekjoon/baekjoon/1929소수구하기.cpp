#include<iostream>

using namespace std;

int main() {

	int M, N;
	cin >> M >> N;

	int flag = 0;

	if (M == 1) M = 2;
	for (int i = M; i <= N; i++) {
		for (int j = 2; j*j <= i; j++) {
			if (i%j == 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 0)
			cout << i << "\n";
		flag = 0;
	}
	return 0;
}