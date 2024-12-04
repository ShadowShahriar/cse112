#include <iostream>
#include <string>
using namespace std;

int main()
{
	unsigned int t = 0;
	cin >> t;

	while (t--)
	{
		int flag = 1;
		string str;
		cin >> str;

		int n = str.length();
		string foundkeys = "";
		for (int i = 0; i < n; i++)
		{
			if (str[i] == 'r' || str[i] == 'g' || str[i] == 'b')
				foundkeys += str[i];
			else if (str[i] == 'R' || str[i] == 'G' || str[i] == 'B')
			{
				char searchkey = 'r';
				if (str[i] == 'G')
					searchkey = 'g';
				else if (str[i] == 'B')
					searchkey = 'b';
				if (foundkeys.find(searchkey) == string::npos)
				{
					flag = 0;
					break;
				}
			}
		}
		cout << (flag ? "YES" : "NO") << endl;
	}
}