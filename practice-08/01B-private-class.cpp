#include <iostream>
using namespace std;

class Person
{
private:
	string name;
	int age;

public:
	Person(string n, int a)
	{
		name = n;
		age = a;
	}

	string getName()
	{
		return name;
	}

	int getAge()
	{
		return age;
	}
};

int main()
{
	Person p1("Shahriar", 21);
	cout << p1.getName() << endl;
	cout << p1.getAge() << endl;
	return 0;
}