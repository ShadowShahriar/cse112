#include <iostream>
#include <string>
using namespace std;

int main()
{
	string pwd;
	string bpwd;
	cin >> pwd;

	int N = pwd.size();
	for (int I = 0; I < N; I++)
	{
		if (I == 0 && isalpha(pwd[I]))
			bpwd += toupper(pwd[I]);
		else
		{
			if (pwd[I] == 's')
				bpwd += '$';
			else if (pwd[I] == 'i')
				bpwd += '!';
			else if (pwd[I] == 'o')
			{
				bpwd += '(';
				bpwd += ')';
			}
			else
				bpwd += pwd[I];
		}
	}
	bpwd += '.';
	cout << bpwd;
	return 0;
}