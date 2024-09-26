#include <iostream>
using namespace std;

class Student
{
	string name;
	int marks1, marks2, marks3;

public:
	Student()
	{
		name = "Unknown";
		marks1 = 0;
		marks2 = 0;
		marks3 = 0;
	}

	Student(string n, int m1, int m2, int m3)
	{
		name = n;
		marks1 = m1;
		marks2 = m2;
		marks3 = m3;
	}

	string getName()
	{
		return name;
	}

	void getMarks()
	{
		cout << marks1 << endl;
		cout << marks2 << endl;
		cout << marks3 << endl;
	}

	void setName(string n)
	{
		name = n;
	}

	void setMarks(int m1, int m2, int m3)
	{
		marks1 = m1;
		marks2 = m2;
		marks3 = m3;
	}

	int calculateTotalMarks()
	{
		return marks1 + marks2 + marks3;
	}
};

int main()
{
	Student s1;
	Student s2("Shahriar", 60, 97, 88);

	cout << "Name:        " << s1.getName() << endl;
	cout << "Total Marks: " << s1.calculateTotalMarks() << endl;
	cout << endl;
	cout << "Name:        " << s2.getName() << endl;
	cout << "Total Marks: " << s2.calculateTotalMarks() << endl;
	return 0;
}