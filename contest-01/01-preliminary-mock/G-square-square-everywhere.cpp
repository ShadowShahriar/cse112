#include <iostream>
using namespace std;

#include <math.h>

int isPerfectSquare(int x)
{
	int sqrtx = sqrt(x);
	return sqrtx * sqrtx == x;
}

int main()
{
	int t = 0;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int ps = 0;
		int m = 0;
		cin >> m;
		for (int j = 0; j < m; j++)
		{
			int num = 0;
			cin >> num;
			if (isPerfectSquare(num) == 0)
				ps++;
		}
		cout << ps << endl;
	}
	return 0;
}