#include <iostream>
using namespace std;
typedef long long int lli;

int main()
{
	lli pillars = 0;
	cin >> pillars;

	lli pillar_array[pillars] = {0};
	for (lli i = 0; i < pillars; i++)
	{
		cin >> pillar_array[i];
	}

	lli queries = 0;
	cin >> queries;

	for (lli q = 0; q < queries; q++)
	{
		lli HEIGHT, FULL_POWER, POWER_LOSS, COUNT;
		cin >> HEIGHT >> FULL_POWER >> POWER_LOSS;

		COUNT = 0;
		for (lli r = 0; r < pillars; r++)
			if (pillar_array[r] >= HEIGHT)
				COUNT++;

		lli total_strength_loss = POWER_LOSS * COUNT;
		lli remaining = FULL_POWER - total_strength_loss;
		cout << ((remaining > 0) ? "Apaa Nai :(" : "Apaa Ache :)") << endl;
	}
	return 0;
}