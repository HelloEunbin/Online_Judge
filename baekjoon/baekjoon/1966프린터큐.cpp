#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

typedef struct doc {
	int index;
	int importance;
}doc;

doc arr[100]; //기존 배열
int impo[100]; // 중요도 배열

bool compare(int p1, int p2) {
	return p1 > p2;
}

int main() {

	int test;
	int N, M;

	cin >> test;
	while (test--) {
		cin >> N >> M;
		queue<doc> queue;

		for (int i = 0; i < N; i++) {
			cin >> arr[i].importance;
			arr[i].index = i;
			impo[i] = arr[i].importance;
			queue.push(arr[i]);
		}

		sort(impo, impo + N, compare); //중요도 배열
		int i = 0;
		while (1) {
			if (queue.front().importance != impo[i]) { //중요도 배열의 값과 큐의 첫번째가 다르면 큐의 끝으로 넣는다.
				queue.push(queue.front());
				queue.pop();
			}
			else {
				if (queue.front().index == M) { //원하는 값
					cout << i + 1 << "\n";
					break;
				}
				queue.pop(); //원하는 값이 아닐 경우 pop
				i++;
			}
		}
	}

	return 0;

}