#include<iostream>

using namespace std;
int main() {

	int f, s, g, u, d;

	cin >> f >> s >> g >> u >> d; //전체 층, 현재 있는 층, 가려는 층, up하는 층, down하는 층

	int cnt = 0;

	if (s < g) { //현재 있는 층이 가려는 층보다 밑에 있을 때
		if (u == 0) { //up이 0이면 안됨
			cout << "use the stairs";
			return 0;
		}
		while (s < g) { //현재 있는 층이 가려는 층보다 커질 때 까지
			s += u; //up!
			cnt++; //해주는 만큼 cnt++
			if (s == g) { //업하다 같아지면 바로 정지
				cout << cnt;
				return 0;
			}
		}
		while (s > g) { //업해준 것을 다시 가려는 층이 될 때까지 down
			s -= d; //down~
			cnt++; //해주는 만큼 cnt++
			if (s == g) { //다운하다 같아지면 바로 정지
				cout << cnt;
				return 0;
			}
		}
		cout << "use the stairs"; //위에서 s==g가 안되었을 때
	}
	else if (s > g) { //위와 반대방향으로 동일
		if (d == 0) {
			cout << "use the stairs";
			return 0;
		}
		while (s > g) {
			s -= d;
			cnt++;
			if (s == g) {
				cout << cnt;
				return 0;
			}
		}
		while (s < g) {
			s += u;
			cnt++;
			if (s == g) {
				cout << cnt;
				return 0;
			}
		}

		cout << "use the stairs";
	}
	else { //같을 때
		cout << cnt;
	}
	return 0;

}