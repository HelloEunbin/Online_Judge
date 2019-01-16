#include<iostream>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>


using namespace std;

void DFS(vector<int> graph[], int V) {
	stack<int> stack;
	int visit[1001] = { 0, };

	visit[V] = 1;
	stack.push(V);
	cout << V << " ";

	while (!stack.empty()) {
		V = stack.top();

		for (int i = 0; i < graph[V].size();) { //�ּ��� ���� ����, �湮���� ���� ��带 ã�� ���ÿ� �־��ش�.
			if (visit[graph[V][i]] == 0) {
				V = graph[V][i]; //������ ��ü���ش�.
				visit[V] = 1;
				stack.push(V);
				i = 0; //���ο� ������ ó������ Ȯ���ϱ� ����.
				cout << V << " ";
			}
			else
				i++;
		}
		stack.pop();
	}
}

void BFS(vector<int> graph[], int V) {
	queue<int> queue;
	int visit[1001] = { 0, };

	visit[V] = 1;
	queue.push(V);

	while (!queue.empty()) {
		V = queue.front();

		for (int i = 0; i < graph[V].size(); i++) { //������ ����Ǿ��ִ� ��� ��带 ť�� �־��ش�.
			if (visit[graph[V][i]] == 0) {
				visit[graph[V][i]] = 1;
				queue.push(graph[V][i]);
			}
		}
		cout << queue.front() << " ";
		queue.pop();
	}
}

int main() {

	
	queue<int> queue;
	vector<int> graph[1001]; //������ 1���� �����̱� ������ 1001�� ����ش�.

	int N, M, V;
	int a, b;

	cin >> N >> M >> V;

	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	for (int i = 0; i < N; i++) {
		sort(graph[i].begin(), graph[i].begin() + graph[i].size()); //������ �� �Ǿ� �ֱ� ������ ���Ľ�����, .begin�� ���� �ּ�.
	}
	
	DFS(graph, V);
	cout << "\n";
	BFS(graph, V);

	return 0;
}