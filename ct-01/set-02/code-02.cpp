#include <iostream>
using namespace std;

class Employee
{
	string name;
	int wage;

public:
	Employee()
	{
		name = "Unknown";
		wage = 0;
	}

	Employee(string n, int w)
	{
		name = n;
		wage = w;
	}

	string getName()
	{
		return name;
	}

	int getHourlyWage()
	{
		return wage;
	}

	void setName(string n)
	{
		name = n;
	}

	void setHourlyWage(int w)
	{
		wage = w;
	}

	int calculateWeeklyPay(int hoursWorked)
	{
		return wage * hoursWorked;
	}
};

int main()
{
	Employee e1;
	Employee e2("Shahriar", 35);

	cout << "Employee Name: " << e1.getName() << endl;
	cout << "Weekly Pay   : " << e1.calculateWeeklyPay(40) << "/=" << endl;
	cout << endl;
	cout << "Employee Name: " << e2.getName() << endl;
	cout << "Weekly Pay   : " << e2.calculateWeeklyPay(40) << "/=" << endl;
	return 0;
}