#include <iostream>
using namespace std;

class Student
{
private:
	int studentID;

public:
	string name;

	// === public method to set the private studentID ===
	void setID(int id)
	{
		studentID = id;
	}

	// === public method to get the private studentID ===
	int getID()
	{
		return studentID;
	}
};

int main()
{
	Student student;
	student.name = "Shadman Shahriar";
	student.setID(408);

	cout << "Name: " << student.name << endl;
	cout << "SID:  " << student.getID() << endl;
	return 0;
}