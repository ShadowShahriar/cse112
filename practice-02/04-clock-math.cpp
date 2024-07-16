#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int H;
	int M;
	cin >> H >> M;

	double nH = 0.5 * (H * 60 + M);
	double nM = 6 * M;
	double A = abs(nH - nM);
	cout << min(360 - A, A);
	return 0;
}