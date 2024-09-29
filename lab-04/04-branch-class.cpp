#include <iostream>
#define employees 10
#define branches 2
using namespace std;

class Person
{
	string name;
	string position;

public:
	Person()
	{
	}

	Person(string n, string p)
	{
		name = n;
		position = p;
	}

	string getName()
	{
		return name;
	}

	string getPosition()
	{
		return position;
	}
};

class Branch
{
	string branch_name;
	string branch_location;
	Person employee[employees];

public:
	Branch(string bn, string bl, Person e[employees])
	{
		branch_name = bn;
		branch_location = bl;

		for (int i = 0; i < employees; i++)
			employee[i] = e[i];
	}

	string getLocation()
	{
		return branch_location;
	}

	void getInfo()
	{
		cout << "Branch Name    : " << branch_name << endl;
		cout << "Branch Location: " << branch_location << endl;
		cout << "Employees:" << endl;
		for (int i = 0; i < employees; i++)
			cout << " - " << employee[i].getName() << " " << employee[i].getPosition() << endl;
	}
};

int main()
{
	Person team1[employees] = {
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

	Person team2[employees] = {
		Person("Shahriar", "TR"),
		Person("Rabyea", "E"),
		Person("Rumon", "E"),
		Person("Ronny", "E"),
		Person("Minhaj", "E"),
		Person("Azmain", "E"),
		Person("Himu", "E"),
		Person("Minu", "E"),
		Person("Mobarak", "E"),
		Person("Adnan", "HR")};

	Branch branch[branches] = {
		Branch("BRAC Bank", "Mirpur 11", team1),
		Branch("IDFC Bank", "Motijheel", team2)};

	string searchLocation;
	cout << "Enter Branch Location: " << endl;
	cin >> searchLocation;
	cout << endl;

	for (int i = 0; i < branches; i++)
		if (branch[i].getLocation() == searchLocation)
			branch[i].getInfo();

	return 0;
}