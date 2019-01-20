#include<iostream>
#include<stack>
#include<string>

using namespace std;

int answer(stack<int> &stack, char a) {
	int num = 0;
	int result = 0;

	if (!stack.empty()) {
		if (a == ')') {
			if (stack.top() != '(') {
				while (stack.top() != '(') {
					num += stack.top();
					stack.pop();
					if (stack.size() == 0) //())�� �־�������, 2]�� �Ǿ����� ��, stack.pop()�ϸ� �� ����, �� �� return 0�� �Ѵ�.(�߸��� ��ȣ)
						return 0;
				}
				num = 2 * num; //(2,3)�� �־����� ��, 2+3�� ���ְ� 2�� �����ش�.
				stack.pop();
				return num;
			}
			else if (stack.top() == '(') { //()�� �Ǿ������� �ٷ� 2����
				stack.pop();
				return 2;
			}
			else
				return 0; //Ȥ�� �̻��� ���ڰ� �ִٸ� 0����
		}
		else if (a == ']') {
			if (stack.top() != '[') {
				while (stack.top() != '[') {
					num += stack.top();
					stack.pop();
					if (stack.size() == 0) //���� ����
						return 0;
				}
				num = 3 * num; //���� ����
				stack.pop();
				return num;
			}
			else if (stack.top() == '[') { //���� ����
				stack.pop();
				return 3;
			}
			else
				return 0;
		}
	}
	else
		return 0;
}

int main() {

	string str;
	stack<int> stack;

	int result = 0;

	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] != ')' && str[i] != ']') {
			stack.push(str[i]);
		}
		else {
			result = answer(stack, str[i]);
			if (result == 0) {
				cout << "0";
				return 0;
			}
			else {
				stack.push(result);
			}
		}
	}
	int answer = 0;
	while (!stack.empty()) {
		if (stack.top() == '(' || stack.top() == ')' || stack.top() == '[' || stack.top() == ']') { //����� ���� ���ÿ� ��ȣ�� ������ �߸��� ��ȣ
			answer = 0;
			break;
		}
		answer += stack.top();
		stack.pop();
	}
	cout << answer;
	return 0;
}