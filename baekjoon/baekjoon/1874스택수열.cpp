#include<iostream>
#include<stack>

using namespace std;

int main() {

	int N;

	cin >> N;

	stack<int> stack;

	int number[100000];
	
	for (int i = 0; i < N; i++)
		cin >> number[i];

	int i = 1,j=0;
	while (true) { //������ �� �ִ� �������� Ȯ���ϱ�
		if (!stack.empty()&&stack.top() == number[j]) { //������ ������� �ʰ�, ������ top�� number�� ���ٸ�
			stack.pop(); //pop
			j++;
		}
		else {
			if (i > N) //�ѹ��� ���Ƽ� ��� pop���� �ʰ�, push�Ϸ��� �� �� i�� N���� ũ�� break;
				break;
			stack.push(i);
			i++;
		}
	}

	if (!stack.empty()) { //������ �� ���� �����̶�� NO���
		cout << "NO\n";
		return 0;
	}

	else {
		i = 1, j = 0;
		while (true) { //������ �� �ִ� �����̶�� ����ϱ�
			if (!stack.empty() && stack.top() == number[j]) {
				stack.pop();
				j++;
				cout << "-\n";
			}
			else {
				if (i > N)
					break;
				stack.push(i);
				i++;
				cout << "+\n";
			}
		}
	}

	return 0;
}