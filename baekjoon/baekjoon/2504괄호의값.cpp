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
					if (stack.size() == 0) //())로 주어졌을때, 2]로 되어있을 때, stack.pop()하면 빈 스택, 그 땐 return 0을 한다.(잘못된 괄호)
						return 0;
				}
				num = 2 * num; //(2,3)로 주어졌을 때, 2+3을 해주고 2를 곱해준다.
				stack.pop();
				return num;
			}
			else if (stack.top() == '(') { //()로 되어있으면 바로 2리턴
				stack.pop();
				return 2;
			}
			else
				return 0; //혹시 이상한 문자가 있다면 0리턴
		}
		else if (a == ']') {
			if (stack.top() != '[') {
				while (stack.top() != '[') {
					num += stack.top();
					stack.pop();
					if (stack.size() == 0) //위와 동일
						return 0;
				}
				num = 3 * num; //위와 동일
				stack.pop();
				return num;
			}
			else if (stack.top() == '[') { //위와 동일
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
		if (stack.top() == '(' || stack.top() == ')' || stack.top() == '[' || stack.top() == ']') { //계산을 끝낸 스택에 괄호가 있으면 잘못된 괄호
			answer = 0;
			break;
		}
		answer += stack.top();
		stack.pop();
	}
	cout << answer;
	return 0;
}