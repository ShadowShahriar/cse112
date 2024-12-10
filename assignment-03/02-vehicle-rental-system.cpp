#include <iostream>
using namespace std;

class Vehicle
{
private:
	string registrationNumber;
	string brand;

protected:
	float rentalRate;

public:
	Vehicle(string rn, string br, float rate) : registrationNumber(rn), brand(br), rentalRate(rate) {}

	virtual void displayDetails()
	{
		cout << "Registration Number: " << registrationNumber << endl;
		cout << "Brand: " << brand << endl;
		cout << "Rental Rate: " << rentalRate << " per day" << endl;
	}
};

class Car : public Vehicle
{
private:
	int numberOfDoors;

public:
	Car(string regNum, string br, float rate, int doors) : Vehicle(regNum, br, rate), numberOfDoors(doors) {}

	void displayDetails()
	{
		Vehicle::displayDetails();
		cout << "Number of Doors: " << numberOfDoors << endl;
	}

	float calculateRentalCost(int days)
	{
		return days * rentalRate;
	}
};

class Bike : public Vehicle
{
private:
	bool isElectric;

public:
	Bike(string regNum, string br, float rate, bool electric) : Vehicle(regNum, br, rate), isElectric(electric) {}

	void displayDetails()
	{
		Vehicle::displayDetails();
		cout << "Is Electric: " << (isElectric ? "Yes" : "No") << endl;
	}

	float calculateRentalCost(int hours)
	{
		return hours * (rentalRate / 24);
	}
};

int main()
{
	Car car("DHA23332", "Toyota", 112.0, 4);
	cout << "Car Details:" << endl;
	car.displayDetails();
	cout << "Car Rental Cost for 5 days: " << car.calculateRentalCost(5) << " USD" << endl;

	cout << endl;

	Bike bike("CUE43323", "Swift", 50.0, true);
	cout << "Bike Details:" << endl;
	bike.displayDetails();
	cout << "Bike Rental Cost for 10 hours: " << bike.calculateRentalCost(10) << " USD" << endl;
	return 0;
}
