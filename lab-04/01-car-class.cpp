#include <iostream>
using namespace std;

class Car
{
	string company;
	string model;
	int highestSpeed;

public:
	Car(string com, string m, int hs)
	{
		company = com;
		model = m;
		highestSpeed = hs;
	}

	void displayInfo(int i)
	{
		cout << endl;
		cout << "Car " << i << endl;
		cout << "Model    : " << model << endl;
		cout << "Company  : " << company << endl;
		cout << "Max Speed: " << highestSpeed << "kmph" << endl;
	}
};

int main()
{
	Car c1("Honda", "Civic", 137);
	Car c2("KIA", "Carnival MPV", 190);
	Car c3("Toyota", "Avanza", 180);

	c1.displayInfo(1);
	c2.displayInfo(2);
	c3.displayInfo(3);
	return 0;
}