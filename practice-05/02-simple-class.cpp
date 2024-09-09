#include <iostream>
using namespace std;

// === a simple Class with two public members ===
class Person
{
public:
	string name;
	int age;
};

int main()
{
	// === object of the aforementioned Class ===
	Person p1;

	// === setting values to the public members ===
	p1.name = "Shahriar";
	p1.age = 21;

	// === printing the values ===
	cout << p1.name << endl;
	cout << p1.age << endl;
	return 0;
}