#include<iostream>
#include<stack>

using namespace std;

int main() {

	int N;

	cin >> N;

	stack<int> stack;

	int number[100000];
	
	for (int i = 0; i < N; i++)
		cin >> number[i];

	int i = 1,j=0;
	while (true) { //생성될 수 있는 수열인지 확인하기
		if (!stack.empty()&&stack.top() == number[j]) { //스택이 비어있지 않고, 스택의 top이 number와 같다면
			stack.pop(); //pop
			j++;
		}
		else {
			if (i > N) //한바퀴 돌아서 계속 pop되지 않고, push하려고 할 때 i가 N보다 크면 break;
				break;
			stack.push(i);
			i++;
		}
	}

	if (!stack.empty()) { //생성될 수 없는 수열이라면 NO출력
		cout << "NO\n";
		return 0;
	}

	else {
		i = 1, j = 0;
		while (true) { //생성될 수 있는 수열이라면 출력하기
			if (!stack.empty() && stack.top() == number[j]) {
				stack.pop();
				j++;
				cout << "-\n";
			}
			else {
				if (i > N)
					break;
				stack.push(i);
				i++;
				cout << "+\n";
			}
		}
	}

	return 0;
}