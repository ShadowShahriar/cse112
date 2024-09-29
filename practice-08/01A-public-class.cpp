#include <iostream>
using namespace std;

class Person
{
public:
	string name;
	int age;

	Person(string n, int a)
	{
		name = n;
		age = a;
	}
};

int main()
{
	Person p1("Shahriar", 21);
	cout << p1.name << endl;
	cout << p1.age << endl;
	return 0;
}