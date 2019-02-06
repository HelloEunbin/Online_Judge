#include<iostream>

using namespace std;

int main() {

	int a;
	int flag = 0;
	for (int i = 0; i < 8; i++) {
		cin >> a;
		if (a == i + 1 && (flag == 0 || flag == 1)) {
			flag = 1;
		}
		else if (a + i == 8 && (flag == 0 || flag == 2)) {
			flag = 2;
		}
		else {
			flag = 3;
			break;
		}
	}
	if (flag == 1)
		cout << "ascending";
	else if (flag == 2)
		cout << "descending";
	else
		cout << "mixed";

	return 0;
}
/*
#include<iostream>

using namespace std;

int main() {

	int a;
	int as = 0, des = 0;

	for (int i = 0; i < 8; i++) {
		cin >> a;
		if (a == i + 1)
			as++;
		else if (a + i == 8)
			des++;
	}

	if (as == 8)
		cout << "ascending";
	else if (des == 8)
		cout << "descending";
	else
		cout << "mixed";

	return 0;
}
*/