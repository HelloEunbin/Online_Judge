#include<iostream>

using namespace std;

int main() {

	int result = 0;
	int N;
	int num;

	cin >> N;

	while (N--) {
		cin >> num;
		if (num == 2) //2�� �Ҽ�
			result++;
		else{
			int i;
			for (i = 2; i < num; i++) { 
				if (num%i == 0) //�߰��� �ڽŰ� �������� 0�� �Ǵ� ���� �ִٸ� ����� �ִٴ� ���̹Ƿ� ������ �Ҽ� �ƴϴ�.
					break;
			}
			if (i == num) //������ ���� ���� �ڽ��� ���ٸ� ����� ���� ������ �Ҽ��̴�. 1�� i=2�̰� num=1�̱� ������ ���ǿ� ���� �ȵȴ�.
				result++;
		}
	}
	cout << result;
	return 0;
}