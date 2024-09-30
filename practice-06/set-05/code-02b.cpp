#include <iostream>
using namespace std;

class Account
{
	string accHolderName;
	int accNumber;
	string accType;
	double balance;

public:
	Account()
	{
		accHolderName = "Not Assigned";
		accNumber = 0;
		accType = "Savings";
		balance = 0.0;
	}

	Account(string hn, int an, string at, double b)
	{
		accHolderName = hn;
		accNumber = an;
		accType = at;
		balance = b;
	}

	void display()
	{
		cout << endl;
		cout << "Account Information:" << endl;
		cout << "Holder Name: " << accHolderName << endl;
		cout << "A/C Number : " << accNumber << endl;
		cout << "A/C Type   : " << accType << endl;
		cout << "Balance    : " << balance << "/=" << endl;
	}
};

int main()
{
	Account a1;
	Account a2("Shahriar", 408, "Savings", 42900.50);

	a1.display();
	a2.display();
	return 0;
}