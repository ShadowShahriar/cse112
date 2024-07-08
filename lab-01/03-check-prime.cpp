#include <iostream>
using namespace std;

int isPrime(int num)
{
	if (num <= 1)
		return 0;
	else if (num == 2 || num == 3)
		return 1;
	else
	{
		for (int i = 2; i * i <= num; i++)
			if (num % i == 0)
				return 0;
		return 1;
	}
}

int main()
{
	int num = 0;
	cin >> num;
	cout << num << " is " << (isPrime(num) ? "a" : "NOT a") << " prime number";
	return 0;
}