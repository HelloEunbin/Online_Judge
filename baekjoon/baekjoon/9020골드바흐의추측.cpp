#include<iostream>

using namespace std;

int main() {

	int test;
	cin >> test;

	int n, k;
	int flag = 0;
	int a, b;
	int gap = 10000; //n의 범위가 10000까지기 때문에, 그 사이 소수의 값의 차는 10000보다 무조건 작다.

	while (test--) {
		cin >> n;
		k = n;
		for (int i = 2; i < k; i++) {
			for (int j = 2; j*j <= i; j++) { //소수 찾기
				if (i%j == 0) {
					flag = 1;
					break;
				}
			}
			if (flag == 0) {
				for (int j = 2; j*j <= n-i; j++) { //"n-찾은약수"도 소수인지 확인하기
					if ((n - i) % j == 0) {
						flag = 1;
						break;
					}
				}
				if (flag == 0) { //둘다 소수라면
					if (gap > n - 2 * i) { //기존의 gap보다 작다면
						a = i;
						b = n - i;
						gap = b - a;
						k = b; //소수 찾는 범위 줄이기, 만약 8의 약수 2,6을 찾았다면 3,4,5의 범위에서만 약수 찾으면 된다. 대칭이기 때문에
					}
				}
				if (gap == 0) { //gap이 0이라면 두 소수의 차이가 무조건 가장 작기 때문에 break;
					cout << a << " " << b << "\n";
					break;
				}
			}
			flag = 0;
		}
		if(gap!=0) //두 소수의 차이가 0이 아니라면
			cout << a << " " << b << "\n";
		gap = 10000; //gap을 최대값으로 만들어준다.
	}
	return 0;
}

/* //참고
 int T,n;
	int part1, part2;
	scanf("%d\n", &T);

	for(int i=0;i<T;i++)
	{
		scanf("%d", &n);
		for(int j=n/2;j<n;j++) //j*j<=i로 해도 되지만 이 방법도 있다.
		{
			if(sosu(j)&&sosu(n-j)) //true&&true여야지 성립
			{
				part1=n-j;
				part2=j;
				break; //break 걸어주는 이유는 가장 빠르게 찾는 것이 소수의 차가 가장 적기 때문이다. 범위를 n/2부터 n으로 했기 때문에
			}
		}
		printf("%d %d\n", part1, part2);
	}
}

int sosu(int n)
{
	if(n==1) return 0;
	if(n==2) return 1;
	for(int i=2;i*i<=n;i++)
	{
		if(n%i==0)
			return 0;
	}
	return 1;
}

*/