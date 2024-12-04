#include <iostream>
using namespace std;
typedef long long ll;

ll calcHealth(ll h, ll b, ll c)
{
	ll d = ((c - 1) * b) + (b * 2);
	ll n = h / d;
	ll progress = h % d;
	ll H = n * c;

	if (progress > 0)
	{
		if (progress <= b * (c - 1))
			H += (progress + (b - 1)) / b;
		else
			H += c;
	}
	return H;
}

int main()
{
	ll h1, b1, c1;
	cin >> h1 >> b1 >> c1;

	ll h2, b2, c2;
	cin >> h2 >> b2 >> c2;

	ll health1 = calcHealth(h1, b2, c2);
	ll health2 = calcHealth(h2, b1, c1);

	if (health1 > health2)
		cout << "MIKE TYSON";
	else if (health1 < health2)
		cout << "JAKE PAUL";
	else
		cout << "DRAW";
	cout << endl;
	return 0;
}