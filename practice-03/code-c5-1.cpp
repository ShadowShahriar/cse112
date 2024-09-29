#include <iostream>
using namespace std;

class Person
{
public:
	string name;
	int age;

	void introduce()
	{
		cout << name << endl;
		cout << age << endl;
	}
};

int main()
{
	Person person;
	Person *ptr = &person;

	ptr->name = "Shahriar";
	ptr->age = 21;
	ptr->introduce();
	return 0;
}