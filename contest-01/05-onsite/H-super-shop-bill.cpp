#include <iostream>
#include <iomanip>
using namespace std;
typedef long double ld;
typedef long long unsigned int lli;

int main()
{
	lli n;
	cin >> n;

	ld s = 0;
	ld g = 0;
	while (n--)
	{
		char c = 'A';
		lli p = 0;
		lli q = 0;
		cin >> c >> p >> q;

		ld m = 0.0;
		if (c == 'F')
			m = 1.1;
		else if (c == 'O')
			m = 1.075;
		else if (c == 'A')
			m = 1.0;

		s += (p * q) * m;
		g += (p * q);
	}
	s += g * 0.05;
	cout << fixed << setprecision(2) << s;
	return 0;
}