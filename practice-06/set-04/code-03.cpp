#include <iostream>
using namespace std;

class Car
{
public:
	Car()
	{
		cout << "Default Constructor: A car is being built." << endl;
	}

	Car(string model)
	{
		cout << "Parameterized Constructor: Car model " << model << " is being built." << endl;
	}

	~Car()
	{
		cout << "Destructor: The car is being destroyed." << endl;
	}

	void start()
	{
		cout << "The car engine is starting." << endl;
	}
};

int main()
{
	Car c1;			 // Line 1
	Car c2("Sedan"); // Line 2
	c1.start();		 // Line 3
	c2.start();		 // Line 4
	return 0;
}