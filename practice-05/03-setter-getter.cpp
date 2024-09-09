#include <iostream>
using namespace std;

// === a Class with two private members ===
class Person
{
private:
	string name;
	int age;

public:
	// === setters ===
	void setName(string val)
	{
		name = val;
	}

	void setAge(int val)
	{
		age = val;
	}

	// === getters ===
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
	// === object of the aforementioned Class ===
	Person p1;

	// === setting values to the private members using setter methods ===
	p1.setName("Shahriar");
	p1.setAge(21);

	// === printing values using getter methods ===
	cout << p1.getName() << endl;
	cout << p1.getAge() << endl;
	return 0;
}