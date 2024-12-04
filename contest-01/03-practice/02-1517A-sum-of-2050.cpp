#include <iostream>
using namespace std;

int main()
{
	int t = 0;
	cin >> t;

	while (t--)
	{
		long long unsigned int n = 0;
		cin >> n;

		int count = 0;
		while (n >= 2050)
		{
			count++;
			long long unsigned int m = 2050;
			while (m <= n)
			{
				m *= 10;
			}
			m /= 10;
			n -= m;
		}

		cout << (n != 0 ? -1 : count) << endl;
	}
	return 0;
}