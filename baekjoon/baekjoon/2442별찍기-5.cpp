#include<iostream>

using namespace std;

int main() {
	int num;
	cin >> num;
	for (int i = num; i > 0; i--) { //�� num�� ������
		for (int j = i-1; j > 0; j--) { //��ĭ�� 4,3,2,1��
			cout << " ";
		}
		for (int k = 2 * i - 1; k<=2 * num - 1; k++) { //*�� 1,3,5,7,9��
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}
