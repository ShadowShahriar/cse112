#include <iostream>
using namespace std;

class Person
{
	string name;
	string position;

public:
	Person(string n, string p)
	{
		name = n;
		position = p;
	}

	string getName()
	{
		return name;
	}
};

int main()
{
	Person team[10] = {
		Person("Shayan", "TR"),
		Person("Munna", "E"),
		Person("Simon", "E"),
		Person("Sharmin", "E"),
		Person("Fatema", "E"),
		Person("Ahona", "E"),
		Person("Rubaiyat", "E"),
		Person("Rebeka", "E"),
		Person("Bulbul", "E"),
		Person("Jamal", "HR")};

	for (int i = 0; i < 10; i++)
		cout << team[i].getName() << endl;

	return 0;
}