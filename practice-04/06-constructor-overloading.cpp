#include <iostream>
using namespace std;
class Rectangle
{
private:
	int length;
	int width;

public:
	// === default constructor ===
	Rectangle()
	{
		length = 0;
		width = 0;
	}

	// === parameterized constructor 1 ===
	Rectangle(int l, int w)
	{
		length = l;
		width = w;
	}

	// === parameterized constructor 2 (square case) ===
	Rectangle(int side)
	{
		length = side;
		width = side;
	}

	// === method to calculate area ===
	int area()
	{
		return length * width;
	}
};

int main()
{
	Rectangle rect1;		// Calls the default constructor
	Rectangle rect2(10, 5); // Calls the parameterized constructor 1
	Rectangle rect3(7);		// Calls the parameterized constructor 2

	cout << "Area of rect1: " << rect1.area() << endl; // 0
	cout << "Area of rect2: " << rect2.area() << endl; // 50
	cout << "Area of rect3: " << rect3.area() << endl; // 49
	return 0;
}