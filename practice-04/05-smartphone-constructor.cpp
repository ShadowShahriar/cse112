#include <iostream>
using namespace std;

class Smartphone
{
private:
	int batteryLife;

public:
	string brand;
	string model;

	Smartphone(string b, string m, int battery)
	{
		brand = b;
		model = m;
		batteryLife = battery;
	}

	void makeCall(string number)
	{
		cout << "Calling " << number << " from " << brand << " " << model << endl;
	}

	void showBatteryLife()
	{
		cout << "Battery life is " << batteryLife << " hours" << endl;
	}
};

int main()
{
	Smartphone phone("Apple", "iPhone 15 Pro Max", 20);
	phone.makeCall("+1 234567890");
	phone.showBatteryLife();
	return 0;
}