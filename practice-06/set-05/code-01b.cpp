#include <iostream>
using namespace std;

class Account
{
private:
	float balance;

public:
	float getBalance()
	{
		return balance;
	}
};

int main()
{
	Account account;
	cout << account.getBalance() << endl;
	return 0;
}