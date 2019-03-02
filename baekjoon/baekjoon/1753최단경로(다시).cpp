#include<iostream>
#include<vector>
#include<algorithm>
#include<cstring>
#define MIN(a,b) a>b ? b: a
#define INF 987654321

using namespace std;

int main() {

	vector<pair<int, int>> graph[20001];

	int V, E, K, u, v, w; //정점개수, 간선개수, 시작정점, u->v, w:가중치

	cin >> V >> E >> K;

	for (int i = 0; i < E; i++) {
		cin >> u >> v >> w;
		graph[u].push_back({ v,w });
	}
	for (int i = 1; i <= V; i++) {
		sort(graph[i].begin(), graph[i].begin() + graph[i].size());
	}

	vector<int> dist(V+1, INF); //0인덱스는 사용하지 않기 때문에 +1개를 더해준다.

	int start = K;
	dist[start] = 0;

	for (int i = 0; i < V; i++) { //단순히 정점 개수만큼만 돌리면 됨
		int w = INF, index=0; 
		for (int j = 0; j < graph[start].size(); j++) {
			int a = graph[start][j].first;
			dist[a] = MIN(dist[a], dist[start] + graph[start][j].second);
			if (w > dist[a]) { //그 다음 시작 정점을 선택하기 위한 조건
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