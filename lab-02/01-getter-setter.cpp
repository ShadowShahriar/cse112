#include <iostream>
using namespace std;

class Shape
{
private:
	int side1 = 0;
	int side2 = 0;

public:
	void setvalue(int s1, int s2)
	{
		side1 = s1;
		side2 = s2;
	}

	void getvalue()
	{
		cout << "side1     : " << side1 << " units" << endl;
		cout << "side2     : " << side2 << " units" << endl;
	}

	void area()
	{
		cout << "area      : " << 2 * ((side1 + side2) * .5) << " square units" << endl;
	}

	void perimeter()
	{
		cout << "perimeter : " << 2 * (side1 + side2) << " units" << endl;
	}
};

int main()
{
	cout << "Shape [1]" << endl;
	Shape shape1;
	shape1.setvalue(10, 20);
	shape1.getvalue();
	shape1.area();
	shape1.perimeter();

	cout << endl;

	cout << "Shape [2]" << endl;
	Shape shape2;
	shape2.setvalue(30, 40);
	shape2.getvalue();
	shape2.area();
	shape2.perimeter();

	return 0;
}