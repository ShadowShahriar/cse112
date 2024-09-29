#include <iostream>
using namespace std;

class Person
{
	string name;
	int age;

public:
	Person(string n, int a)
	{
		name = n;
		age = a;
	}

	void introduce()
	{
		cout << "Hey, it's " << name << ", and I am " << age << " years old." << endl;
	}
};

Person returnObject(string name, int age)
{
	Person person(name, age);
	return person;
}

int main()
{
	Person p = returnObject("Shahriar", 21);
	p.introduce();
	return 0;
}