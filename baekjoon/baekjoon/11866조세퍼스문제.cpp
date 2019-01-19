#include<iostream>
#include<queue>

using namespace std;

int main() {

	int N, M;
	queue<int> queue;

	cin >> N >> M;

	for(int i=1;i<=N;i++)
		queue.push(i);
	
	cout << "<";

	while (true) {
		for (int i = 1; i < M; i++) { //원형 큐로 계속 push, pop 해주면 된다.
			queue.push(queue.front());
			queue.pop();
		}
		cout << queue.front();
		queue.pop();
		if (queue.size() == 0)
			break;
		cout << ", ";
	}
	cout << ">";

	return 0;
}