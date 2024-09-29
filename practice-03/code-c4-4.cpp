#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;

public:
	// === parameterized constructor ===
	Point(int a, int b)
	{
		x = a;
		y = b;
	}
	// === copy constructor ===
	Point(const Point &p)
	{
		x = p.x;
		y = p.y;
		cout << "Copy constructor called!" << endl;
	}

	void display()
	{
		cout << "(" << x << ", " << y << ")" << endl;
	}
};

int main()
{
	Point p1(10, 20); // Parameterized constructor is called
	cout << "Point p1: ";
	p1.display();

	Point p2 = p1; // Copy constructor is called
	cout << "Point p2: ";
	p2.display();

	return 0;
}