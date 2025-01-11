#include <iostream>
using namespace std;

int main()
{
	int x = 0;

	try
	{
		cin >> x;
		if (x > 100)
			throw string("Integer greater than 100");
		else if (x < 0)
			throw string("Integer less than 0");
	}
	catch (string msg)
	{
		cout << "Exception: " << msg << endl;
	}

	return 0;
}