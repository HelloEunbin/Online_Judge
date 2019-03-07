#include<stdio.h>
#pragma warning(disable:4996)

int main() {

	int t;
	int num1, num2;

	scanf("%d", &t);
	while (t--) {
		scanf("%d %d", &num1, &num2);

		int max = (num1 > num2) ? num1 : num2;
		int lcm; //최대공약수, 최소공배수

		for (int i = 1; i <= max; i++) {
			if (num1 % i == 0 && num2 % i == 0) {
				lcm = i * (num1 / i) * (num2 / i);
			}
		}

		printf("%d\n", lcm);
	}
	return 0;
}