#include<iostream>

using namespace std;

int main() {

	int N; //���� ��

	cin >> N;
	
	int i = 0, result = 1;

	while (result<N) {
		i++;
		result = result + i * 6; //ã�� ��Ģ
	}

	cout << i + 1 << "\n";

	return 0;
}