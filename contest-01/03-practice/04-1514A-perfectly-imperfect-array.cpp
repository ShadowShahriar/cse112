#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	long long unsigned int t = 0;
	cin >> t;

	while (t--)
	{
		int flag = 0;
		long long unsigned int n = 0;
		cin >> n;
		while (n--)
		{
			long long unsigned int m, s = 0;
			cin >> m;
			s = sqrt(m);
			if (s * s != m)
				if (flag == 0)
					flag = 1;
		}
		cout << (flag ? "YES" : "NO") << endl;
	}
	return 0;
}
