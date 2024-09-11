#include <iostream>
using namespace std;

class Student
{
private:
	string name;
	int roll;
	float marks[3];

public:
	void setDetails(string n, int r, float m[3])
	{
		name = n;
		roll = r;
		marks[0] = m[0];
		marks[1] = m[1];
		marks[2] = m[2];
	}

	float getTotalMarks()
	{
		return marks[0] + marks[1] + marks[2];
	}

	float getAverageMarks()
	{
		return getTotalMarks() / 3;
	}

	void display()
	{
		cout << "Name         : " << name << endl;
		cout << "Roll No.     : " << roll << endl;
		cout << "Total Marks  : " << getTotalMarks() << endl;
		cout << "Average Marks: " << getAverageMarks() << endl;
	}
};

int main()
{
	Student std1;
	float marks[3] = {96.25, 56.00, 77.75};
	std1.setDetails("Shahriar", 408, marks);
	std1.display();
}