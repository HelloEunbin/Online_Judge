#include<iostream>
#include<string>

using namespace std;

int main() {

	string str;
	getline(cin,str);

	int count = 0;

	if (str[0] != ' ') //���� �տ� ���ڰ� ���� �� ������ ���� 1��
		count++;
	for (int i = 0; i < str.length()-1; i++) { //���� �ڴ� Ȯ�� �� �ʿ䰡 ����. ' '' '�͵� Ȯ�� ���ص� �ǰ�, abc' '�� Ȯ�� ���ص� ��, abc�� �ϳ��� ���ڷ� ������ ���� Ȯ�� �� �ʿ� ����
		if (str[i] == ' '&&str[i+1]!=' ') { //' ' ������ ' '�� �ƴҶ� count++
			count++;
		}
	}
	cout << count;

	return 0;
}

/* �̷��� �ص� ��
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