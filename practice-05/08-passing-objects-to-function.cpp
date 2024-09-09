#include <iostream>
using namespace std;

class Person
{
public:
	string name;
	int age;
};

void displayPersonInformation(Person person)
{
	cout << person.name << endl;
	cout << person.age << endl;
}

int main()
{
	Person p1;
	p1.name = "Shahriar";
	p1.age = 21;

	displayPersonInformation(p1);
	return 0;
}