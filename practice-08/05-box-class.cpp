#include <iostream>
using namespace std;

class Box1
{
	double area;
	string color;

public:
	Box1(double a, string c)
	{
		area = a;
		color = c;
	}

	double getArea()
	{
		return area;
	}
};

class Box2
{
	double area;
	string color;

public:
	Box2(double a, string c)
	{
		area = a;
		color = c;
	}

	double getArea()
	{
		return area;
	}
};

void CompareBox(Box1 a, Box2 b)
{
	if (a.getArea() > b.getArea())
		cout << "Box1 has a larger area than Box2.";
	else
		cout << "Box2 has a larger area than Box1.";
}

int main()
{
	Box1 b1(1248, "red");
	Box2 b2(512, "blue");
	CompareBox(b1, b2);
	return 0;
}