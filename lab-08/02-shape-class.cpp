#include <iostream>
using namespace std;

class Shape
{
public:
	void display()
	{
		cout << "This is a shape." << endl;
	}
};

class Polygon : public Shape
{
public:
	void display()
	{
		cout << "Polygon is a shape." << endl;
	}
};

class Rectangle : public Polygon
{
public:
	void display()
	{
		cout << "Rectangle is a polygon." << endl;
	}
};

class Triangle : public Polygon
{
public:
	void display()
	{
		cout << "Triangle is a polygon." << endl;
	}
};

class Square : public Rectangle
{
public:
	void display()
	{
		cout << "Square is a rectangle." << endl;
	}
};

int main()
{
	Shape shape;
	Polygon polygon;
	Rectangle rectangle;
	Triangle triangle;
	Square square;

	shape.display();
	polygon.display();
	rectangle.display();
	triangle.display();
	square.display();
	return 0;
}