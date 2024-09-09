#include <iostream>
using namespace std;

class Person
{
public:
	string name;
	int age;

	Person()
	{
		name = "Unknown";
		age = 0;
	}
};

int main()
{
	Person p1;
	cout << p1.name << endl;
	cout << p1.age << endl;
	return 0;
}