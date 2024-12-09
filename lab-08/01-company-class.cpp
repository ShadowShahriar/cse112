#include <iostream>
using namespace std;

class Company
{
protected:
	int no_of_employee;
	int no_of_dept;
	int employee_id;
	string employee_name;

public:
	void set_value(int nE, int nD, int eID, string eName)
	{
		no_of_employee = nE;
		no_of_dept = nD;
		employee_id = eID;
		employee_name = eName;
	}
};

class HR
{
protected:
	string address;
	int salary;
	string contact;

public:
	void set_value(string a, int s, string c)
	{
		address = a;
		salary = s;
		contact = c;
	}
};

class Employee : public Company, public HR
{
public:
	void display()
	{
		cout << "No. of Employees: " << no_of_employee << endl;
		cout << "No. of Depts.   : " << no_of_dept << endl;
		cout << "Employee ID     : " << employee_id << endl;
		cout << "Employee Name   : " << employee_name << endl;
		cout << "Address         : " << address << endl;
		cout << "Salary          : " << salary << endl;
		cout << "Contact         : " << contact << endl;
	}
};

int main()
{
	Employee kamla;
	kamla.Company::set_value(154, 20, 408, "S. Shahriar");
	kamla.HR::set_value("Road no. 32, Rupnagar R/A, Mirpur - 1216", 60000, "+88018XXXXXXX3");
	kamla.display();

	return 0;
}