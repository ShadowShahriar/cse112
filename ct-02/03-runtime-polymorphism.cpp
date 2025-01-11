#include <iostream>
using namespace std;

class Area
{
public:
	virtual void calculate()
	{
		cout << "Can't override." << endl;
	}
};

class Circle : public Area
{
protected:
	double radius = 5;

public:
	void calculate()
	{
		cout << 3.14 * radius * radius << endl;
	}
};

class Rectangle : public Area
{
protected:
	double length = 5, width = 10;

public:
	void calculate()
	{
		cout << length * width << endl;
	}
};

class Triangle : public Area
{
protected:
	double base = 10, height = 20;

public:
	void calculate()
	{
		cout << .5 * base * height << endl;
	}
};

int main()
{
	Area *ptr;
	Circle circle;
	ptr = &circle;
	ptr->calculate();

	Rectangle rectangle;
	ptr = &rectangle;
	ptr->calculate();

	Triangle triangle;
	ptr = &triangle;
	ptr->calculate();

	return 0;
}