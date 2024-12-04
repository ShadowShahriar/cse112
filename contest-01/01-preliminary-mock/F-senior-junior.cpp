#include <iostream>
using namespace std;

int main()
{
	int intake = 0;
	cin >> intake;

	switch (intake)
	{
	case 48:
	case 49:
	case 50:
		cout << "Probin";
		break;
	case 51:
	case 52:
	case 53:
		cout << "Nobin";
		break;
	default:
		cout << "Bohiragoto";
	}
	return 0;
}