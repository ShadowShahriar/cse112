#include <iostream>
using namespace std;

class Marks
{
protected:
	string name;
	int roll;
	int marks;

	Marks(string n, int r, int m)
	{
		name = n;
		roll = r;
		marks = m;
	}

public:
	float get()
	{
		return marks;
	}
};

class Physics : public Marks
{
public:
	Physics(string n, int r, int m) : Marks(n, r, m) {}
};

class Chemistry : public Marks
{
public:
	Chemistry(string n, int r, int m) : Marks(n, r, m) {}
};

class Mathematics : public Marks
{
public:
	Mathematics(string n, int r, int m) : Marks(n, r, m) {}
};

int main()
{
	int rollOffset = 100;
	int count = 0;
	float total = 0;
	float avg = 0.00;
	cout << "Enter the numbers of students: ";
	cin >> count;

	for (int i = 1; i <= count; i++)
	{
		string name;
		int roll = i + rollOffset;
		int marksP, marksC, marksM, marks;

		cout << "Student " << i << ": " << endl;
		cout << "Name: ";
		cin >> name;
		cout << "Roll: " << roll << endl;
		cout << "Marks obtained in Physics    : ";
		cin >> marksP;
		cout << "Marks obtained in Chemistry  : ";
		cin >> marksC;
		cout << "Marks obtained in Mathematics: ";
		cin >> marksM;

		Physics subjectPhysics(name, roll, marksP);
		Chemistry subjectChemistry(name, roll, marksC);
		Mathematics subjectMathematics(name, roll, marksM);

		marks = subjectPhysics.get() + subjectChemistry.get() + subjectMathematics.get();

		cout << "Total marks: " << marks << endl;
		cout << endl;
		total += (float)marks;
	}

	avg = (total / count);
	cout << "Average marks of " << count << " student(s): " << avg << endl;
	return 0;
}