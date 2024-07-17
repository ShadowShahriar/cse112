#include <iostream>
using namespace std;

int fib(int n)
{
	if (n <= 1)
		return n;
	else
		return fib(n - 1) + fib(n - 2);
}

int main()
{
	int i = -2;
	int min = 0;
	int current = 0;
	int previous = 0;
	int max = 0;
	cin >> min >> max;
	while (1)
	{
		i++;
		current = fib(i);
		if (current == previous)
			continue;
		if (current > max)
			break;
		if (current >= min)
			cout << current << endl;
		previous = current;
	}
	return 0;
}