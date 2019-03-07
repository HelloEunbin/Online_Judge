#include <stdio.h>
#pragma warning(disable : 4996)
int main() {

	int num1, num2;
	scanf("%d %d", &num1, &num2);

	int max = (num1 > num2) ? num1 : num2;
	int gcd, lcm; //최대공약수, 최소공배수

	for (int i = 1; i <= max; i++) {
		if (num1 % i == 0 && num2 % i == 0) {
			gcd = i;
			lcm = i * (num1 / i) * (num2 / i);
		}
	}

	printf("%d\n%d", gcd, lcm);

	return 0;
}