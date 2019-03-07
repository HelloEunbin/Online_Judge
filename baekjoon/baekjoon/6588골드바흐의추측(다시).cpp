#include<stdio.h>
#include<math.h>

int main() {


	int num1;
	int num2;
	int flag1 = 0;
	int flag2 = 0;
	while (1) {
		scanf("%d", &num1);
		if (num1 == 0)
			break;
		for (int i = 3; i <= num1 / 2; i = i + 2) {
			num2 = num1 - i;
			for (int j = 2; j <= sqrt(num2); j++) {
				if (num2%j == 0) {
					flag1 = 1;
					break;
				}
			}
			if (flag1 == 0) {
				printf("%d = %d + %d\n", num1, i, num2);
				flag2 = 1;
				break;
			}
			flag1 = 0;
		}
		if (flag2 == 0)
			printf("Goldbach's conjecture is wrong.");
	}

	return 0;
}