#include <iostream>
using namespace std;

class Box
{
	float length, width, height;

public:
	Box(float l, float w, float h)
	{
		length = l;
		width = w;
		height = h;
	}

	friend void compareBoxes(const Box &b1, const Box &b2);
};

void compareBoxes(const Box &b1, const Box &b2)
{
	float v1 = b1.length * b1.width * b1.height;
	float v2 = b2.length * b2.width * b2.height;
	if (v1 > v2)
		cout << "Box 1 has a larger volume." << endl;
	else
		cout << "Box 2 has a larger volume." << endl;
}

int main()
{
	float length, width, height;

	cout << "Enter the dimensions for Box 1:" << endl;
	cin >> length >> width >> height;
	Box b1(length, width, height);

	cout << endl;
	cout << "Enter the dimensions for Box 2:" << endl;
	cin >> length >> width >> height;
	Box b2(length, width, height);

	compareBoxes(b1, b2);
	return 0;
}