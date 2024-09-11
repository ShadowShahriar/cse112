#include <iostream>
using namespace std;

class People
{
	string name;
	int age;

public:
	People()
	{
		name = "Unknown";
		age = 0;
	}

	void display()
	{
		cout << name << " " << age << endl;
	}
};

int main()
{
	People p1;
	People p2;
	p2.display();
	return 0;
}