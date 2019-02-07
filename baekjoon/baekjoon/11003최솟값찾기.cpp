#include<stdio.h>
#include<deque>
#pragma warning(disable:4996)
using namespace std;

int main() {

	int N, L;

	scanf("%d %d", &N, &L);

	deque<pair<int,int>> deque; //pair�� �ϸ� �ε��� ���� �����ϴ�. deque�� �� �ڷ� �� �� ���� �ְ� �� �� �ִ�.

	int a;
	int cnt = 0;

	for (int i = 0; i < N; i++) {
		scanf("%d", &a);
		while (!deque.empty()&&a < deque.back().first) { //���� empty�� �ƴϰ�, a�� ���� ������� ������ ������
			deque.pop_back(); //a�� �� Ŭ������ ��� ����. ���ٰ� empty �ɼ� ������ empty������ �ʿ��ϴ�.
		}
		deque.push_back({ a, i }); //�ε����� �Բ� push, ()�ȿ� {}�־� �޸��� ���� //�ε����� 0���� ����

		if (deque.front().second == i - L) //���� ���� �� �ε����� L�� ���� ���� �� ex) L=3�̰� i=3�̸� i=1,i=2,i=3�� �����ϴµ� front().second=0�϶�
			deque.pop_front(); //pop�Ѵ�.

		printf("%d ", deque.front().first); //���� �� �� ���

	}

	return 0;
}