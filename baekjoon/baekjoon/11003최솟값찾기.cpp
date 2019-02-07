#include<stdio.h>
#include<deque>
#pragma warning(disable:4996)
using namespace std;

int main() {

	int N, L;

	scanf("%d %d", &N, &L);

	deque<pair<int,int>> deque; //pair로 하면 인덱스 저장 가능하다. deque는 앞 뒤로 둘 다 빼고 넣고 할 수 있다.

	int a;
	int cnt = 0;

	for (int i = 0; i < N; i++) {
		scanf("%d", &a);
		while (!deque.empty()&&a < deque.back().first) { //덱이 empty가 아니고, a가 덱의 가장뒤의 값보다 작으면
			deque.pop_back(); //a가 더 클때까지 계속 뺀다. 빼다가 empty 될수 있으니 empty조건이 필요하다.
		}
		deque.push_back({ a, i }); //인덱스와 함께 push, ()안에 {}넣어 콤마로 구분 //인덱스는 0부터 시작

		if (deque.front().second == i - L) //덱의 제일 앞 인덱스가 L의 범위 밖일 때 ex) L=3이고 i=3이면 i=1,i=2,i=3만 봐야하는데 front().second=0일때
			deque.pop_front(); //pop한다.

		printf("%d ", deque.front().first); //제일 앞 값 출력

	}

	return 0;
}