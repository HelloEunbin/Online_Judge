#include<iostream>

using namespace std;

int main() {

	int test;
	cin >> test;

	int n, k;
	int flag = 0;
	int a, b;
	int gap = 10000; //n�� ������ 10000������ ������, �� ���� �Ҽ��� ���� ���� 10000���� ������ �۴�.

	while (test--) {
		cin >> n;
		k = n;
		for (int i = 2; i < k; i++) {
			for (int j = 2; j*j <= i; j++) { //�Ҽ� ã��
				if (i%j == 0) {
					flag = 1;
					break;
				}
			}
			if (flag == 0) {
				for (int j = 2; j*j <= n-i; j++) { //"n-ã�����"�� �Ҽ����� Ȯ���ϱ�
					if ((n - i) % j == 0) {
						flag = 1;
						break;
					}
				}
				if (flag == 0) { //�Ѵ� �Ҽ����
					if (gap > n - 2 * i) { //������ gap���� �۴ٸ�
						a = i;
						b = n - i;
						gap = b - a;
						k = b; //�Ҽ� ã�� ���� ���̱�, ���� 8�� ��� 2,6�� ã�Ҵٸ� 3,4,5�� ���������� ��� ã���� �ȴ�. ��Ī�̱� ������
					}
				}
				if (gap == 0) { //gap�� 0�̶�� �� �Ҽ��� ���̰� ������ ���� �۱� ������ break;
					cout << a << " " << b << "\n";
					break;
				}
			}
			flag = 0;
		}
		if(gap!=0) //�� �Ҽ��� ���̰� 0�� �ƴ϶��
			cout << a << " " << b << "\n";
		gap = 10000; //gap�� �ִ밪���� ������ش�.
	}
	return 0;
}

/* //����
 int T,n;
	int part1, part2;
	scanf("%d\n", &T);

	for(int i=0;i<T;i++)
	{
		scanf("%d", &n);
		for(int j=n/2;j<n;j++) //j*j<=i�� �ص� ������ �� ����� �ִ�.
		{
			if(sosu(j)&&sosu(n-j)) //true&&true������ ����
			{
				part1=n-j;
				part2=j;
				break; //break �ɾ��ִ� ������ ���� ������ ã�� ���� �Ҽ��� ���� ���� ���� �����̴�. ������ n/2���� n���� �߱� ������
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