#include<iostream>

using namespace std;

int main() {

	int M, N;
	cin >> M >> N;

	int sum = 0;
	int min = 0;
	int flag = 0;

	if (M == 1) M = 2; //M이 1이라면 2로 바꿔준다.
	for (int i = M; i <= N; i++) {
		for (int j = 2; j*j <= i; j++) { //j*j<=1로 해줘서 시간을 더욱 단축시키자, 제곱수
			if (i%j == 0) {
				flag = 1;
				break;
			}
		}
		if (flag == 0) { //약수가 없을때
			sum += i;
			if (min == 0) //최소값이 정해지지 않았을 때
				min = i;
		}
		flag = 0;
	}
	if (sum == 0)
		cout << "-1\n";

	else
		cout << sum << "\n" << min;

	return 0;
}