#include <iostream>
using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		long long int n, d;
		cin >> n >> d;
		int count = 0;
		int remainingBuildings[n];

		for (int i = 0; i < n; i++)
		{
			int distance;
			cin >> distance;
			if (distance > d)
			{
				remainingBuildings[count] = i + 1;
				count++;
			}
		}

		if (count == 0)
			cout << "FE!N" << endl;
		else
		{
			cout << count << endl;
			for (int i = 0; i < count; i++)
				cout << remainingBuildings[i] << " ";
			cout << endl;
		}
	}

	return 0;
}
