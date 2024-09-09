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

	Person(const Person &p)
	{
		name = p.name;
		age = p.age;
		cout << "Copy constructor called!" << endl;
	}

	void introduce()
	{
		cout << "Hello, my name is " << name << ", and I am " << age << " years old." << endl;
	}
};

int main()
{
	Person p1("Shahriar", 21); // parameterized constructor
	p1.introduce();

	Person p2 = p1; // copy constructor
	p2.introduce();

	return 0;
}