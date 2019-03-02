#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main() {

	vector<int> vector[1001];
	queue<int> queue;

	int check[1001] = { 0, };
	int n, m, u, v; //정점의 개수, 간선 개수, 연결된 노드1, 연결된 노드2

	cin >> n >> m;
	for (int i = 0; i < m; i++) {
		cin >> u >> v;
		vector[u].push_back(v);
		vector[v].push_back(u);
	}

	int i = 0; //while 돌리는 기준값
	queue.push(1); //시작하기 위해 먼저 넣어줌
	check[1] = 1; //넣어줬기 때문에 체크해줌
	int cnt = 1; //연결 요소의 개수

	while (!queue.empty()) {
		for (int j = 0; j < vector[queue.front()].size(); j++) {
			if (check[vector[queue.front()][j]] == 0) {
				queue.push(vector[queue.front()][j]);
				check[vector[queue.front()][j]] = 1;
			}
		}
		queue.pop();
		if (queue.size() == 0) {
			for (int j = 1; j <= n; j++) {
				if (check[j] == 0) {
					cnt++;
					queue.push(j);
					check[j] = 1;
					break;
				}
			}
		}
	}

	cout << cnt;
	return 0;
}