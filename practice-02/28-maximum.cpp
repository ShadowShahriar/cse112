#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int N = 0;
	cin >> N;

	int I = 0;
	int M = 0;
	while (N--)
	{
		cin >> I;
		M = max(M, I);
	}

	cout << M;
	return 0;
}
