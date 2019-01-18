#include<iostream>

using namespace std;

int main() {

	int N; //방의 수

	cin >> N;
	
	int i = 0, result = 1;

	while (result<N) {
		i++;
		result = result + i * 6; //찾은 규칙
	}

	cout << i + 1 << "\n";

	return 0;
}