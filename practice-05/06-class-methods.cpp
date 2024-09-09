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
	Person p1;
	p1.name = "Shahriar";
	p1.age = 21;
	p1.introduce();
	return 0;
}