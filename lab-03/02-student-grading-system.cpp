#include <iostream>
#define subjects 3
#define students 5
using namespace std;

class Student
{
	string name;
	int studentID;
	float marks[subjects];

public:
	void setData(int count)
	{
		cout << "Enter details for Student " << (count + 1) << endl;
		cout << "Name : ";
		cin >> name;
		cout << "ID   : ";
		cin >> studentID;
		cout << "Marks: ";
		for (int i = 0; i < subjects; ++i)
			cin >> marks[i];
		cout << endl;
	}

	float calculateTotalMarks()
	{
		float total = 0;
		for (int i = 0; i < subjects; ++i)
			total += marks[i];
		return total;
	}

	void displayTotalMarks()
	{
		cout << endl;
		cout << "Student Name: " << name << endl;
		cout << "Student ID  : " << studentID << endl;
		cout << "Total Marks : " << calculateTotalMarks() << endl;
	}
};

int main()
{
	int i = 0;
	float sum = 0;
	Student array[students];

	for (i = 0; i < students; i++)
	{
		array[i].setData(i);
		sum += array[i].calculateTotalMarks();
	}

	cout << "Individual marks of each student: ";
	for (i = 0; i < students; i++)
		array[i].displayTotalMarks();

	cout << endl;
	cout << "Average marks of all students: " << (sum / students) << endl;

	return 0;
}