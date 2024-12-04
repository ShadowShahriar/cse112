#include <iostream>
using namespace std;

int main()
{
	long long int i;
	string s;
	int flag = 1;

	cin >> s;
	for (i = 0; i < s.length();)
	{
		if (s[i] == '3' || s[i] == '9')
			i++;
		else
		{
			flag = 0;
			break;
		}
	}

	cout << (flag ? "Yes" : "No");
	return 0;
}