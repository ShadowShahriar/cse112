#include <iostream>
using namespace std;

class BankAccount
{
	string accountNumber;
	float balance;

public:
	BankAccount(string accno, float b)
	{
		accountNumber = accno;
		balance = b;
	}

	string getAccNumber()
	{
		return accountNumber;
	}

	float getBalance()
	{
		return balance;
	}

	void deposit(float amount)
	{
		balance += amount;
	}
};

int main()
{
	BankAccount account("20245103408", 1000);
	account.deposit(500);

	cout << "Account Number : " << account.getAccNumber() << endl;
	cout << "Current Balance: " << account.getBalance() << "/=" << endl;
	return 0;
}