#include <iostream>
using namespace std;

class Person;
class Address
{
	string street, city, postalCode;
	friend void displayDetails(Person, Address);

public:
	Address(string s, string c, string p)
	{
		street = s;
		city = c;
		postalCode = p;
	}
};

class Person
{
	string name;
	int age;
	friend void displayDetails(Person, Address);

public:
	Person(string n, int a)
	{
		name = n;
		age = a;
	}
};

void displayDetails(Person person, Address address)
{
	cout << "Name       : " << person.name << endl;
	cout << "Age        : " << person.age << " yrs" << endl;
	cout << "Street     : " << address.street << endl;
	cout << "City       : " << address.city << endl;
	cout << "Postal Code: " << address.postalCode << endl;
}

int main()
{
	Person person("Shahriar", 21);
	Address address("Mirpur Thana Road", "Dhaka", "1216");
	displayDetails(person, address);
	return 0;
}