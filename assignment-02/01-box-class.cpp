#include <iostream>
using namespace std;

class Box
{
	int length, width, height;

public:
	void setDimensions(int l, int w, int h)
	{
		length = l;
		width = w;
		height = h;
	}

	int getLength()
	{
		return length;
	}

	int getWidth()
	{
		return width;
	}

	int getHeight()
	{
		return height;
	}
};

Box combineBoxes(Box b1, Box b2)
{
	int length = b1.getLength() + b2.getLength();
	int width = b1.getWidth() + b2.getWidth();
	int height = b1.getHeight() + b2.getHeight();

	Box b3;
	b3.setDimensions(length, width, height);
	return b3;
}

int main()
{
	Box b1, b2;
	b1.setDimensions(36, 12, 48);
	b2.setDimensions(128, 67, 13);

	Box b3 = combineBoxes(b1, b2);
	cout << "Combined Length: " << b3.getLength() << " units" << endl;
	cout << "Combined Width : " << b3.getWidth() << " units" << endl;
	cout << "Combined Height: " << b3.getHeight() << " units" << endl;
	return 0;
}