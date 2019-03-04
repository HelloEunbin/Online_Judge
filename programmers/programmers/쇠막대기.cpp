#include<iostream>
#include<string>
#include<stack>

using namespace std;

int solution(string arrangement) {
	stack<int> stack;

	int answer = 0;

	for (int i = 0; i < arrangement.length(); i++) {
		int num = 0;
		int flag = 0;
		if (arrangement[i] == ')') {
			while (stack.top() != '(') {
				flag = 1;
				num += stack.top();
				stack.pop();
			}
			stack.pop();
			if (flag == 1) {
				stack.push(num);
				answer += ++num;
			}
			else
				stack.push(1);
		}
		else {
			stack.push(arrangement[i]);
		}
	}
	return answer;
}

int main() {

	string arrangement;
	cin >> arrangement;
	int result = solution(arrangement);

	cout << result;

	return 0;
}