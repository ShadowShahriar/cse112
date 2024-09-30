#include <iostream>
using namespace std;

class Distance
{
public:
	int feet;
	float inches;
	void addData(int f, float in);
	void showData();
};

void Distance::addData(int f, float in)
{
	feet = f;
	inches = in;
}

void Distance::showData()
{
	cout << "Feet  : " << feet << endl;
	cout << "Inches: " << inches << endl;
}

int main()
{
	Distance d;
	d.addData(10, 5.7);
	d.showData();
	return 0;
}