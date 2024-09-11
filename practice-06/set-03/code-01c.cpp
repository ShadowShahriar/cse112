#include <iostream>
using namespace std;

class Rectangle
{
public:
	int length, width;
	void setData(int l, int w);
	void showArea();
};

void Rectangle::setData(int l, int w)
{
	length = l;
	width = w;
}

void Rectangle::showArea()
{
	cout << length * width << endl;
}

int main()
{
	Rectangle r1;
	r1.setData(10, 20);
	r1.showArea();
	return 0;
}