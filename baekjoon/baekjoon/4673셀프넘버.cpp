#include<iostream>

using namespace std;

void selfnum() {
	int i = 1;
	int sum,re;
	int standard;
	int self[10001] = { 0, };

	while(i<10000){
		sum = i;
		re = i;
		if (re >= 1000) {
			standard = 1000;
			sum+= re / standard;
			re %= standard;
		}
		if (re >= 100) {
			standard = 100;
			sum += re / standard;
			re %= standard;
		}
		if (re >= 10) {
			standard = 10;
			sum += re / standard;
			re %= standard;
		}
		if (re >= 1) {
			standard = 1;
			sum += re / standard;
		}
		if(sum<=10000)
			self[sum] = 1;
		i++;
	}
	for (i = 1; i <= 10000; i++) {
		if (self[i] == 0)
			cout << i << "\n";
	}
}
int main() {
	
	selfnum();
	
	return 0;
}