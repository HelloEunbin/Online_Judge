#include<iostream>

using namespace std;

int main() {

	int ab, bc, cd;
	double da;

	cin >> ab >> bc >> cd;
	da = (ab*cd) / (double)bc;

	printf("%.6lf", da);

	return 0;
}