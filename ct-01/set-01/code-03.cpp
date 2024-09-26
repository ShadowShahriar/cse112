#include <iostream>
using namespace std;

class Vehicle
{
	string type;
	int speed;

public:
	Vehicle(string t, int s)
	{
		type = t;
		speed = s;
		cout << type << " with speed " << speed << " km/h is being created." << endl;
	}

	void accelerate(int amount)
	{
		speed += amount;
	}

	void showSpeed()
	{
		cout << type << " current speed: " << speed << " km/h." << endl;
	}

	~Vehicle()
	{
		cout << "Destructor: " << type << " with speed " << speed << " km/h is being destroyed." << endl;
	}
};

int main()
{
	Vehicle v1("Car", 100);
	v1.accelerate(20);
	Vehicle v2("Bike", 50);
	v2.accelerate(10);
	v2.showSpeed();
	v2 = v1;
	v2.showSpeed();
	return 0;
}