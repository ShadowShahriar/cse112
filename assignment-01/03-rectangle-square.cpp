#include <iostream>
using namespace std;

class Rectangle;
class Square
{
	int side;

public:
	Square(int s) : side(s) {}
	friend void printArea(Rectangle rect, Square sq);
	void increaseSide(Rectangle &rect);
};

class Rectangle
{
	int length;
	int width;

public:
	Rectangle(int l, int w) : length(l), width(w) {}
	friend void printArea(Rectangle rect, Square sq);
	friend void Square::increaseSide(Rectangle &rect);
};

void Square::increaseSide(Rectangle &rect)
{
	side += rect.length;
}

void printArea(Rectangle rect, Square sq)
{
	int areaRect = rect.length * rect.width;
	int areaSq = sq.side * sq.side;

	cout << "Rectangle: " << areaRect << " sq units" << endl;
	cout << "Square:    " << areaSq << " sq units" << endl;
}

int main()
{
	Rectangle rect(10, 20);
	Square sq(15);

	cout << "Area before increasing side length:" << endl;
	printArea(rect, sq);

	cout << endl;
	cout << "Area after increasing side length:" << endl;
	sq.increaseSide(rect);
	printArea(rect, sq);
}