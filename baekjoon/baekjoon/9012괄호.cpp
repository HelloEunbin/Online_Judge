#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main() {

	int test;
	cin >> test;
	
	string str;
	
	
	while (test--) {
		cin >> str;
		stack<char> stack;
		bool result = true;

		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(') {
				stack.push('(');
			}
			else if (str[i] == ')') {
				if(!stack.empty())
					stack.pop();
				else {
					result = false;  //스택이 비워져 있는데 pop을하면 NO
					break;
				}
			}
		}
		if (!stack.empty()) //끝까지 다 돌렸는데 아직 스택에 남아있으면 NO
			result = false;

		if (result)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	/* 스택 사용하지 않고 할 수 있다.
	while (test--) {
		cin >> str;
		int count = 0;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(')
				count++;
			else if (str[i] == ')')
				count--;
			if (count < 0)
				break;
		}
		if (count == 0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}*/

	return 0;
}