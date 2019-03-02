#include<iostream>
#include<queue>
#include<vector>

using namespace std;

int main() {

	int n, r1, r2, m, x, y;

	vector<int> family[101];
	queue<pair<int, int>> queue; //
	int check[101] = { 0, };

	cin >> n >> r1 >> r2 >> m;

	for (int i = 0; i < m; i++) {
		cin >> x >> y;
		family[x].push_back(y);
		family[y].push_back(x);
	}

	queue.push({ r1, 1 }); //처음에 방문했다고 체크, *)second를 1로 넣는 이유는
	check[r1] = 1; //방문한 정점 체크

	while (!queue.empty()) {
		for (int i = 0; i < family[queue.front().first].size(); i++) {
			if (family[queue.front().first][i] == r2) { //*)이 부분에서 자식을 체크하고, 바로 second를 출력하기 때문이다.
				cout << queue.front().second;
				return 0; //바로 리턴, -1을 만나지 않기 위해서
			}
			if (check[family[queue.front().first][i]] == 0) { //방문한 정점이 아니라면
				queue.push({ family[queue.front().first][i],queue.front().second + 1 }); //큐에 푸시하고, second는 부모의 second +1로 푸시한다.
				check[family[queue.front().first][i]] = 1; //방문한 정점으로 체크
			}
		}
		queue.pop();
	}
	cout << -1; //큐가 비어있으면 -1 출력

	return 0;
}