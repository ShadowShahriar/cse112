#include <iostream>
using namespace std;

void greet()
{
	cout << "Hello, World!" << endl;
}

int add(int a, int b)
{
	return a + b;
}

int main()
{
	greet();
	cout << add(10, 20);
	return 0;
}