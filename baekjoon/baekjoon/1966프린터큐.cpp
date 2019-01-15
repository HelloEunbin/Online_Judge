#include<iostream>
#include<queue>
#include<algorithm>

using namespace std;

typedef struct doc {
	int index;
	int importance;
}doc;

doc arr[100]; //���� �迭
int impo[100]; // �߿䵵 �迭

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

		sort(impo, impo + N, compare); //�߿䵵 �迭
		int i = 0;
		while (1) {
			if (queue.front().importance != impo[i]) { //�߿䵵 �迭�� ���� ť�� ù��°�� �ٸ��� ť�� ������ �ִ´�.
				queue.push(queue.front());
				queue.pop();
			}
			else {
				if (queue.front().index == M) { //���ϴ� ��
					cout << i + 1 << "\n";
					break;
				}
				queue.pop(); //���ϴ� ���� �ƴ� ��� pop
				i++;
			}
		}
	}

	return 0;

}