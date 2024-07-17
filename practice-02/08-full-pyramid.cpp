#include <iostream>
using namespace std;

int main()
{
	int N, I, J, K;
	cin >> N;
	for (I = 1; I <= N; I++)
	{
		for (J = 1; J <= (N - I); J++)
			cout << " ";
		for (K = 1; K <= I; K++)
		{
			cout << "*";
			if (K != I)
				cout << " ";
		}
		cout << endl;
	}
	return 0;
}