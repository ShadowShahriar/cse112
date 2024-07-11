#include <iostream>
#include <cmath>
using namespace std;

class Rectangle
{
public:
	int width;
	int height;

	void area()
	{
		cout << width * height << endl;
	}

	void perimeter()
	{
		cout << 2 * (width + height) << endl;
	}

	void diagonal()
	{
		cout << sqrt(width * width + height * height) << endl;
	}
};

int main()
{
	Rectangle rect;
	rect.width = 20;
	rect.height = 10;

	rect.area();
	rect.perimeter();
	rect.diagonal();
	return 0;
}