#include<iostream>
#include<stack>
#include<string>

using namespace std;

int main() {
	
	string str;
	stack<int> stack;

	int result = 0;

	cin >> str;
	
	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(' || str[i] == '[') {
			stack.push(str[i]);
		}
		else {
			if (str[i] == ')') {
				stack.top
			}
		}
	}

	return 0;
}