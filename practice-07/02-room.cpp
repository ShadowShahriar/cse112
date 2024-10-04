#include <iostream>
using namespace std;

class Room
{
	double length, width, height;

public:
	Room()
	{
		length = 12;
		width = 8;
		height = 10;
	}

	Room(string _)
	{
		cout << "Enter Room dimensions:" << endl;
		cin >> length >> width >> height;
	}

	Room(double l, double w, double h)
	{
		length = l;
		width = w;
		height = h;
	}

	Room(const Room &room)
	{
		length = room.length;
		width = room.width;
		height = room.height;
		cout << "Copy constructor called!" << endl;
	}

	void calcDisplay(int n)
	{
		double area = length * width;
		cout << "Room " << n << " area: ";
		cout << area << " sq units" << endl;
	}

	double getVolume()
	{
		return length * width * height;
	}
};

Room getLargerRoom(Room r1, Room r2)
{
	if (r1.getVolume() > r2.getVolume())
		return r1;
	return r2;
}

int main()
{
	Room r1;
	Room r2("cin");
	Room r3(24, 32, 48);

	Room *r4 = &r1;
	Room *r5 = &r3;
	Room r6 = r3;

	r1.calcDisplay(1);
	r2.calcDisplay(2);
	r3.calcDisplay(3);
	r4->calcDisplay(4);
	r5->calcDisplay(5);
	r6.calcDisplay(6);

	Room r7 = getLargerRoom(r1, r2);
	r7.calcDisplay(7);
	return 0;
}