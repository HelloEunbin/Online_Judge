#include<iostream>
#include<stack>

using namespace std;

typedef struct topinfo {
	int num;
	int index;
}topinfo;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL), cout.tie(NULL);

	int N;
	cin >> N;

	int num;

	topinfo top;
	stack<topinfo> stack;

	int i = 1;

	while (N--) {
		cin >> num;
		while (!stack.empty()) {
			if (stack.top().num >= num)
				break;
			stack.pop();
		}
		if (stack.size() == 0)
			cout << "0 ";
		else
			cout << stack.top().index << " ";
		stack.push({ num,i });
		i++;
	}
	return 0;
}