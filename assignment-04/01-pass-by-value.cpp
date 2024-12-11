#include <iostream>
using namespace std;

void edit(int x)
{
	x = 10;
	cout << "Value here: " << x << endl;
}

int main()
{
	int a = 5;
	cout << "Before function call: " << a << endl;
	edit(a);
	cout << "After function call: " << a << endl;
	return 0;
}