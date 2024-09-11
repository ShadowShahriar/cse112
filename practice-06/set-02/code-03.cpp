#include <iostream>
using namespace std;

class Room
{
private:
	int length;
	int width;
	int height;

public:
	// parameterized constructor
	Room(int l, int w, int h)
	{
		length = l;
		width = w;
		height = h;
	}

	// copy constructor
	Room(const Room &r)
	{
		length = r.length;
		width = r.width;
		height = r.height;
	}

	void calculateVolume()
	{
		cout << length * width * height << endl;
	}
};

int main()
{
	Room r1(30, 40, 50);
	r1.calculateVolume();

	Room r2 = r1;
	r2.calculateVolume();
	return 0;
}