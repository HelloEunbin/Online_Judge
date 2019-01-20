#include<iostream>
#include<string>

using namespace std;

int main() {

	string str;
	getline(cin,str);

	int count = 0;

	if (str[0] != ' ') //제일 앞에 문자가 왔을 때 무조건 문자 1개
		count++;
	for (int i = 0; i < str.length()-1; i++) { //제일 뒤는 확인 할 필요가 없다. ' '' '와도 확인 안해도 되고, abc' '도 확인 안해도 됨, abc도 하나의 문자로 마지막 문자 확인 할 필요 없음
		if (str[i] == ' '&&str[i+1]!=' ') { //' ' 다음이 ' '가 아닐때 count++
			count++;
		}
	}
	cout << count;

	return 0;
}

/* 이렇게 해도 됨
int flag = 1;
for(int i=0; i<str.length(); i++) {
		if(str.at(i) == ' ') {
			flag = 1;
		}
		else {
			if(flag == 1)
				count ++;
			flag = 0;
		}
	}
*/