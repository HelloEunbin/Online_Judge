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

		for (int i = 0; i < graph[V].size();) { //최소의 값을 가진, 방문하지 않은 노드를 찾아 스택에 넣어준다.
			if (visit[graph[V][i]] == 0) {
				V = graph[V][i]; //정점을 교체해준다.
				visit[V] = 1;
				stack.push(V);
				i = 0; //새로운 정점의 처음부터 확인하기 위함.
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

		for (int i = 0; i < graph[V].size(); i++) { //정점과 연결되어있는 모든 노드를 큐에 넣어준다.
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
	vector<int> graph[1001]; //정점은 1부터 시작이기 때문에 1001로 잡아준다.

	int N, M, V;
	int a, b;

	cin >> N >> M >> V;

	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	for (int i = 0; i < N; i++) {
		sort(graph[i].begin(), graph[i].begin() + graph[i].size()); //정렬이 안 되어 있기 때문에 정렬시켜줌, .begin은 시작 주소.
	}
	
	DFS(graph, V);
	cout << "\n";
	BFS(graph, V);

	return 0;
}