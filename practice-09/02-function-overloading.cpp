#include <iostream>
using namespace std;

int sum(int a, int b)
{
	return a + b;
}

int sum(int a, int b, int c)
{
	return a + b + c;
}

float sum(float a, float b)
{
	return a + b;
}

float sum(float a, float b, float c, float d)
{
	return a + b + c + d;
}

int main()
{
	cout << sum(10, 20) << endl;
	cout << sum(100, 200, 300) << endl;
	cout << sum(10.2f, 20.43f) << endl;
	cout << sum(100, 200, 300, 400) << endl;
	return 0;
}