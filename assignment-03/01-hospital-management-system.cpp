#include <iostream>
using namespace std;

class Staff
{
private:
	int id;
	string name;

protected:
	int age;

public:
	Staff(int sid, string sname, int sage)
	{
		id = sid;
		name = sname;
		age = sage;
	}

	virtual void displayDetails()
	{
		cout << "ID   : " << id << endl;
		cout << "Name : " << name << endl;
		cout << "Age  : " << age << endl;
	}
};

class Doctor : public Staff
{
private:
	string specialization;

public:
	Doctor(int sid, string sname, int sage, string ss) : Staff(sid, sname, sage), specialization(ss) {}

	void displayDetails()
	{
		Staff::displayDetails();
		cout << "Specialization: " << specialization << endl;
	}

	int calculateSalary(int hours, int hourlyRate)
	{
		return hours * hourlyRate;
	}
};

class Nurse : public Staff
{
private:
	string shift;

public:
	Nurse(int sid, string sname, int sage, string ns) : Staff(sid, sname, sage), shift(ns) {}

	void displayDetails()
	{
		Staff::displayDetails();
		cout << "Shift: " << shift << endl;
	}

	int calculateSalary(int days, int dailyRate)
	{
		return days * dailyRate;
	}
};

int main()
{
	Doctor doctor(408, "Dr. Fatema Karim Rupa", 37, "Psychology");
	cout << "Doctor Details:" << endl;
	doctor.displayDetails();
	cout << "Doctor's salary for 40 hours at $50/hour: " << doctor.calculateSalary(40, 50) << " USD" << endl;

	cout << endl;

	Nurse nurse(154, "Ferdousi Karim Ripa", 39, "Day");
	cout << "Nurse Details:" << endl;
	nurse.displayDetails();
	cout << "Nurse's salary for 30 days at $100/day: " << nurse.calculateSalary(30, 100) << " USD" << endl;

	return 0;
}
