#include <iostream>
using namespace std;

class Smartphone
{
public:
	Smartphone()
	{
		cout << "Default Constructor: A new smartphone is being initialized." << endl;
	}

	Smartphone(string brand, double price)
	{
		cout << "Parameterized Constructor: Smartphone brand " << brand << " priced at $" << price << " is being initialized." << endl;
	}

	~Smartphone()
	{
		cout << "Destructor: The smartphone is being destroyed." << endl;
	}

	void call(string number)
	{
		cout << "Calling " << number << " from the smartphone." << endl;
	}
};

int main()
{
	Smartphone s1;					 // Line 1
	Smartphone s2("iPhone", 999.99); // Line 2
	s2.call("123-456-7890");		 // Line 3
	s1.call("987-654-3210");		 // Line 4
	return 0;
}