#include <iostream>
using namespace std;

class Student
{
	string name;
	int rollNumber;
	string cls;
	float marks;

public:
	Student()
	{
		name = "Unknown";
		rollNumber = 0;
		cls = "Not Assigned";
		marks = 0.0;
	}

	Student(string n, int r, string c, float m)
	{
		name = n;
		rollNumber = r;
		cls = c;
		marks = m;
	}

	void display()
	{
		cout << "Name:     " << name << endl;
		cout << "Roll No.: " << rollNumber << endl;
		cout << "Class:    " << cls << endl;
		cout << "Marks:    " << marks << endl;
	}
};

int main()
{
	Student s1("Shahriar", 408, "13th", 97.00);
	s1.display();

	Student s2;
	s2.display();
	return 0;
}