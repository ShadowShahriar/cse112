#include <iostream>
using namespace std;

class Car
{
	string carModel;
	float mileage;

public:
	Car(string cm, float m)
	{
		carModel = cm;
		mileage = m;
	}

	Car()
	{
	}

	Car(const Car &c)
	{
		carModel = c.carModel;
		mileage = c.mileage;
	}

	~Car()
	{
		cout << "The object has been destroyed." << endl;
	}

	float getMileage()
	{
		return mileage;
	}

	void setMileage(float m)
	{
		mileage = m;
	}

	void display()
	{
		cout << "Car Model: " << carModel << endl;
		cout << "Mileage  : " << mileage << endl;
		cout << endl;
	}
};

Car updateMileage(Car c, float amount)
{
	Car d = c;
	d.setMileage(c.getMileage() + amount);
	return d;
}

int main()
{
	Car c1("Toyota", 152);
	Car c2 = updateMileage(c1, 162);

	c1.display();
	c2.display();
	return 0;
}