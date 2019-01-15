#include<iostream>
#include<string>
#include<stack>

using namespace std;

int main() {

	stack<int> stack;

	int N;
	string cmd;
	int number;

	cin >> N;
	while (N--) {
		cin >> cmd;
		if (cmd == "push") {
			cin >> number;
			stack.push(number);
		}

		else if (cmd == "pop") {
			if (stack.empty())
				cout << "-1\n";
			else {
				cout << stack.top() << "\n";
				stack.pop();
			}
		}

		else if (cmd == "size")
			cout << stack.size() << "\n";

		else if (cmd == "empty") {
			if (stack.empty())
				cout << "1\n";
			else
				cout << 0 << endl;
		}

		else if (cmd == "top") {
			if (stack.empty())
				cout << "-1\n";
			else
				cout << stack.top() << "\n";
		}

		return 0;
	}