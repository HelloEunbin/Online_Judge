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
					result = false;  //������ ����� �ִµ� pop���ϸ� NO
					break;
				}
			}
		}
		if (!stack.empty()) //������ �� ���ȴµ� ���� ���ÿ� ���������� NO
			result = false;

		if (result)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	/* ���� ������� �ʰ� �� �� �ִ�.
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