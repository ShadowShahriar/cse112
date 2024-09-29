#include <iostream>
#define PI 3.14159
using namespace std;

class Circle
{
	float radius;

public:
	Circle(float r)
	{
		radius = r;
	}

	Circle(const Circle &c)
	{
		radius = c.radius;
		cout << "Copy constructor called!" << endl;
	}

	float getArea()
	{
		return PI * (radius * radius);
	}

	void display()
	{
		cout << "Radius: " << radius << endl;
		cout << "Area  : " << getArea() << endl;
		cout << endl;
	}
};

int main()
{
	Circle c1(2.0);
	c1.display();

	Circle c2(12);
	c2.display();

	Circle c3(24);
	c3.display();

	Circle c4 = c2;
	c4.display();
	return 0;
}