#include<iostream>

using namespace std;

int main() {
	int num;
	cin >> num;
	for (int i = 1; i <=num; i++) { //ÃÑ 5¹ø µ¹¸®±â
		for (int j = i - 1; j > 0; j--) { //ºóÄ­Àº 1,2,3,4¼ø
			cout << " ";
		}

		for (int k = 2 * i - 1; k <= 2 * num - 1; k++) { //*Àº 9,7,5,3,1¼ø
			cout << "*";
		}
		cout << "\n";
	}

	return 0;
}
