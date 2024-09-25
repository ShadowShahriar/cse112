#include <iostream>
using namespace std;

class Rectangle
{
	int length;
	int width;

public:
	Rectangle()
	{
		length = 1;
		width = 1;
	}

	Rectangle(int l, int w)
	{
		length = l;
		width = w;
	}

	void setLength(int l)
	{
		length = l;
	}

	void setWidth(int w)
	{
		width = w;
	}

	int getLength()
	{
		return length;
	}

	int getWidth()
	{
		return width;
	}

	int calculateArea()
	{
		return length * width;
	}
};

int main()
{
	Rectangle r1;
	Rectangle r2(64, 32);
	cout << "Area of r1: " << r1.calculateArea() << endl;
	cout << "Area of r2: " << r2.calculateArea() << endl;
	return 0;
}