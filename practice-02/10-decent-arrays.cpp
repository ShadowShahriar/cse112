#include <iostream>
using namespace std;

int main()
{
	int N = 0;
	cin >> N;

	int I = 0;
	int A[150];
	string result = "Yes";

	for (I = 0; I < N; I++)
		cin >> A[I];

	for (I = 1; I < N - 1; I++)
		if (A[I - 1] > A[I])
		{
			result = "No";
			break;
		}

	cout << result;
	return 0;
}