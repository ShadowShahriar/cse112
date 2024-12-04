#include <iostream>
using namespace std;

int main()
{
	int flag = 0;
	string str;
	cin >> str;

	int n = str.length();
	for (int i = 0; i < n; i++)
	{
		int count = 0;
		if (str[i] == '0')
		{
			while (str[i] == '0' && i < n)
			{
				count++;
				i++;
			}
		}
		else
		{
			while (str[i] == '1' && i < n)
			{
				count++;
				i++;
			}
		}
		i--;

		if (count >= 7)
		{
			flag = 1;
			break;
		}
	}

	cout << (flag ? "YES" : "NO");
	return 0;
}