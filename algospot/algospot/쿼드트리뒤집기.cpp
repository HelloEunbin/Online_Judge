#include<iostream>
#include<string>

using namespace std;

string str;
int i = 0;

string change(string str) {

	if (str[i] == 'b' || str[i] == 'w') {
		string a = "";
		return "" + str[i++];
	}
	i++;
	string one = change(str);
	string two = change(str);
	string three = change(str);
	string four = change(str);
	string fin = "x" + three + four + one + two;

	return fin;
}

int main() {

	int C;
	cin >> C;

	string str;
	while (C--) {
		cin >> str;
		cout << change(str) << "\n";
		i = 0;
	}

	return 0;
}