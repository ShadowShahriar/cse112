#include <iostream>
using namespace std;
typedef long long int ll;

int main()
{
	ll x = 0;
	ll c = 0;
	cin >> x;

	int A[x] = {0};
	for (ll i = 0; i < x; i++)
	{
		A[x] = 0;
		cin >> A[x];
		if (A[x] == 0)
			c++;
	}

	cout << c << endl;
	return 0;
}