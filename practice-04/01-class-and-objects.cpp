#include <iostream>
using namespace std;

// ===========================
// === a class named 'Car' ===
// ===========================
class Car
{
public:
	string brand;
	string model;
	int year;
};

// =============================================
// === creating objects from the 'Car' class ===
// =============================================
int main()
{
	Car car1;
	car1.brand = "Toyota";
	car1.model = "Corolla";
	car1.year = 2020;

	Car car2;
	car2.brand = "Honda";
	car2.model = "Civic";
	car2.year = 2022;

	cout << car1.brand << " " << car1.model << " " << car1.year << endl;
	cout << car2.brand << " " << car2.model << " " << car2.year << endl;
	return 0;
}