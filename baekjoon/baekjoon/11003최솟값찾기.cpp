#include<iostream>
#include<deque>
#define fastIO() ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
using namespace std;

int main() {

	int N, L;

	cin >> N >> L;

	deque<int> deque;

	int a;
	int cnt = 1;

	for (int i = 0; i < N; i++) {
		cin >> a;
		if (cnt == L) {
			deque.pop_front();
			cnt = 1;
		}
		while (!deque.empty()&&a < deque.back()) {
			deque.pop_back();
		}
			deque.push_back(a);
			cnt++;
			cout << deque.front() << " ";

	}

	return 0;
}