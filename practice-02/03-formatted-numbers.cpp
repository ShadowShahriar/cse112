#include <iostream>
using namespace std;

int main()
{
	string S;
	string R;
	cin >> S;

	int N = S.size();
	for (int I = 0; I < N; I++)
	{
		if (I != 0 && I % 3 == 0)
			R = ',' + R;
		R = S[N - I - 1] + R;
	}

	cout << R;
	return 0;
}