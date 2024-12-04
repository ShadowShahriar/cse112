#include <iostream>
using namespace std;

int main()
{
	string str;
	cin >> str;

	string str2 = "";
	str2 += toupper(str[0]);
	str2 += str.substr(1, str.length() - 1);
	cout << str2;

	return 0;
}