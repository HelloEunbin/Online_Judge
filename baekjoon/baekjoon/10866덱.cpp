#include<iostream>
#include<deque>
#include<string>

using namespace std;

int main() {

	deque<int> deque;

	int n;
	cin >> n;

	string cmd;
	int num;

	while (n--) {
		cin >> cmd;
		if (cmd == "push_front") {
			cin >> num;
			deque.push_front(num);
		}
		else if (cmd == "push_back") {
			cin >> num;
			deque.push_back(num);
		}
		else if (cmd == "pop_front") {
			if (!deque.empty()) {
				cout << deque.front() << "\n";
				deque.pop_front();
			}
			else
				cout << "-1\n";
		}
		else if (cmd == "pop_back") {
			if (!deque.empty()) {
				cout << deque.back() << "\n";
				deque.pop_back();
			}
			else
				cout << "-1\n";
		}
		else if (cmd == "size") {
			cout << deque.size() << "\n";
		}
		else if (cmd == "empty") {
			if (!deque.empty())
				cout << "0\n";
			else
				cout << "1\n";
		}
		else if (cmd == "front") {
			if (!deque.empty()) {
				cout << deque.front() << "\n";
			}
			else
				cout << "-1\n";
		}
		else { //cmd=="back"
			if (!deque.empty()) {
				cout << deque.back() << "\n";
			}
			else
				cout << "-1\n";
		}
	}
	return 0;
}