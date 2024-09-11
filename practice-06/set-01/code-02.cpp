#include <iostream>
using namespace std;

union student
{
	int sid;
	float cgpa;
};

int main()
{
	union student std1;

	std1.sid = 408;
	cout << std1.sid << endl;
	cout << &std1.sid << endl;

	std1.cgpa = 4.86;
	cout << std1.cgpa << endl;
	cout << &std1.cgpa << endl;
	return 0;
}