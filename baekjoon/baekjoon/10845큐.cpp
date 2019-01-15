#include<iostream>
#include<string>
#include<queue>

using namespace std;

int main() {

	queue<int> queue;

	string cmd;
	int N;
	int number;

	cin >> N;
	while (N--) {
		cin >> cmd;
		if (cmd == "push") {
			cin >> number;
			queue.push(number);
		}

		else if (cmd == "pop") {
			if (queue.empty())
				cout << "-1\n";
			else {
				cout << queue.front() << "\n";
				queue.pop();
			}
		}

		else if (cmd == "size") {
			cout << queue.size() << "\n";
		}

		else if (cmd == "empty") {
			if (queue.empty())
				cout << "1\n";
			else
				cout << "0\n";
		}

		else if (cmd == "front") {
			if (queue.empty())
				cout << "-1\n";
			else
				cout << queue.front() << "\n";
		}

		else if (cmd == "back") {
			if (queue.empty())
				cout << "-1\n";
			else
				cout << queue.back() << "\n";
		}
	}
	return 0;
}