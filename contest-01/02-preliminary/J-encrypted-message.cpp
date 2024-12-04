#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;
	string str_result = "";
	cin >> str;

	int n = str.length();
	for (int i = 0; i < n; i++)
	{
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
			str_result += str[i] + 1;
		else
			str_result += (str[i] >= 'y') ? (str[i] - 24) : (str[i] + 2);
	}

	cout << str_result;
	return 0;
}