#include <iostream>
using namespace std;

class Person
{
public:
	string name;
	int age;

	void introduce()
	{
		cout << "Hello, my name is " << name << ", and I am " << age << " years old." << endl;
	}
};

int main()
{
	Person person;
	Person *ptr = &person;

	ptr->name = "Shahriar";
	ptr->age = 21;

	cout << ptr->name << endl;
	cout << ptr->age << endl;
	ptr->introduce();
	return 0;
}