#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#define MIN(a,b) a>b ? b: a
#define INF 987654321

using namespace std;

int main() {

	vector<pair<int, int>> graph[20001];

	int V, E, K, u, v, w; //��������, ��������, ��������, u->v, w:����ġ

	cin >> V >> E >> K;

	for (int i = 0; i < E; i++) {
		cin >> u >> v >> w;
		graph[u].push_back({ v,w });
	}
	for (int i = 1; i <= V; i++) {
		sort(graph[i].begin(), graph[i].begin() + graph[i].size());
	}

	vector<int> dist(V+1, INF); //0�ε����� ������� �ʱ� ������ +1���� �����ش�.

	int start = K;
	dist[start] = 0;

	for (int i = 0; i < V; i++) { //�ܼ��� ���� ������ŭ�� ������ ��
		int w = INF, index=0; 
		for (int j = 0; j < graph[start].size(); j++) {
			int a = graph[start][j].first;
			dist[a] = MIN(dist[a], dist[start] + graph[start][j].second);
			if (w > dist[a]) { //�� ���� ���� ������ �����ϱ� ���� ����
				index = a;
				w = dist[a];
			}
		}
		start = index;
	}
	for (int i = 1; i <= V; i++) {
		if (dist[i] == INF)
			cout << "INF\n";
		else
			cout << dist[i] << "\n";
	}

	return 0;
}