#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main() {

	int building[1001] = { 0, };
	int t;
	int num;
	int cnt = 0;
	for (int i = 1; i <= 10; i++) {
		cin >> t;
		for (int j = 0; j < t; j++) {
			cin >> num;
			building[j] = num;
		}

		for (int j = 2; j < t - 2; j++) {
			if ((building[j - 2] < building[j]) && (building[j - 1] < building[j]) && (building[j + 1] < building[j]) && (building[j + 2] < building[j])) {
				int max1 = max(building[j - 2], building[j - 1]);
				int max2 = max(building[j + 1], building[j + 2]);
				max1 = max(max1, max2);
				cnt += (building[j] - max1);
			}
		}
		printf("#%d %d\n", i, cnt);
		cnt = 0;
		memset(building, 0, sizeof(building));
	}
	return 0;
}