#include <iostream>
#define maxStudents 15
using namespace std;

class Intake99
{
	string name;
	double cgpa, id;

public:
	Intake99(string n, double c, double i)
	{
		name = n;
		cgpa = c;
		id = i;
	}

	void set_val(string n, double c, double i)
	{
		name = n;
		cgpa = c;
		id = i;
	}

	void show_val()
	{
		cout << "Name: " << name;
		cout << ", ID: " << id;
		cout << ", CGPA: " << cgpa << endl;
	}
};

int main()
{
	Intake99 students[maxStudents] = {
		Intake99("Shahriar", 3.55, 408),
		Intake99("Redowan", 3.58, 349),
		Intake99("Manzirul", 3.77, 357),
		Intake99("Hakim", 4.00, 360),
		Intake99("Arefin", 3.98, 347),
		Intake99("Fikrat", 3.87, 328),
		Intake99("Rafi", 3.87, 346),
		Intake99("Saif", 3.67, 361),
		Intake99("Shawon", 3.68, 356),
		Intake99("John", 3.81, 331),
		Intake99("Mimiya", 3.95, 339),
		Intake99("Dristy", 3.98, 343),
		Intake99("Behesti", 3.77, 338),
		Intake99("Protiva", 3.68, 348),
		Intake99("Jannatul", 3.48, 108)};

	for (int i = 0; i < maxStudents; i++)
		students[i].show_val();

	return 0;
}