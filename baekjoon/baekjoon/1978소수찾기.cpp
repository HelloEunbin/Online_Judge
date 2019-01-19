#include<iostream>

using namespace std;

int main() {

	int result = 0;
	int N;
	int num;

	cin >> N;

	while (N--) {
		cin >> num;
		if (num == 2) //2는 소수
			result++;
		else{
			int i;
			for (i = 2; i < num; i++) { 
				if (num%i == 0) //중간에 자신과 나눴을때 0이 되는 수가 있다면 약수가 있다는 뜻이므로 무조건 소수 아니다.
					break;
			}
			if (i == num) //끝까지 돌린 수와 자신이 같다면 약수가 없기 때문에 소수이다. 1도 i=2이고 num=1이기 때문에 조건에 성립 안된다.
				result++;
		}
	}
	cout << result;
	return 0;
}