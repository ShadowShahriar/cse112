#include <iostream>
using namespace std;

class Square
{
public:
	double side;
	Square(double x)
	{
		side = x;
	}

	void display()
	{
		cout << side;
	}
};

int main()
{
	Square obj(30);
	obj.display();
	return 0;
}