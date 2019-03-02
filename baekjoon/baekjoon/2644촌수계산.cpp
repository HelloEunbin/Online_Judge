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

	queue.push({ r1, 1 }); //ó���� �湮�ߴٰ� üũ, *)second�� 1�� �ִ� ������
	check[r1] = 1; //�湮�� ���� üũ

	while (!queue.empty()) {
		for (int i = 0; i < family[queue.front().first].size(); i++) {
			if (family[queue.front().first][i] == r2) { //*)�� �κп��� �ڽ��� üũ�ϰ�, �ٷ� second�� ����ϱ� �����̴�.
				cout << queue.front().second;
				return 0; //�ٷ� ����, -1�� ������ �ʱ� ���ؼ�
			}
			if (check[family[queue.front().first][i]] == 0) { //�湮�� ������ �ƴ϶��
				queue.push({ family[queue.front().first][i],queue.front().second + 1 }); //ť�� Ǫ���ϰ�, second�� �θ��� second +1�� Ǫ���Ѵ�.
				check[family[queue.front().first][i]] = 1; //�湮�� �������� üũ
			}
		}
		queue.pop();
	}
	cout << -1; //ť�� ��������� -1 ���

	return 0;
}