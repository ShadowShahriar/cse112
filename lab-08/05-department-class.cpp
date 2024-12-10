#include <iostream>
using namespace std;

class Department
{
protected:
	string dept_name;
	int dept_code;

public:
	void set_dept(string dN, int dC)
	{
		dept_name = dN;
		dept_code = dC;
	}

	string get_dept()
	{
		return dept_name;
	}

	int get_dept_code()
	{
		return dept_code;
	}
};

class Professor
{
protected:
	string prof_name;
	int prof_id;
	Department prof_dept;

public:
	Professor(string n, int i)
	{
		prof_name = n;
		prof_id = i;
	}

	void assign_department(Department d)
	{
		prof_dept.set_dept(d.get_dept(), d.get_dept_code());
	}
};

class HOD : public Professor
{
protected:
	int hod_start_date;
	int hod_end_date;

public:
	HOD(string n, int i, int hsd, int hed) : Professor(n, i), hod_start_date(hsd), hod_end_date(hed) {}

	void display_info()
	{
		cout << "Department    : " << prof_dept.get_dept() << " (" << prof_dept.get_dept_code() << ")" << endl;
		cout << "Professor Name: " << prof_name << endl;
		cout << "Professor ID  : " << prof_id << endl;
		cout << "HOD Start Date: " << hod_start_date << endl;
		cout << "HOD End Date  : " << hod_end_date << endl;
	}
};

int main()
{
	Department department;
	department.set_dept("Computer Science and Engineering", 101);

	HOD professor("Shahriar", 408, 1025, 1225);
	professor.assign_department(department);
	professor.display_info();
	return 0;
}