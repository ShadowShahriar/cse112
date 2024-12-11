#include <iostream>
using namespace std;

class Distance
{
public:
	float length;
	Distance(float l)
	{
		length = l;
	}

	Distance operator+(Distance &other)
	{
		if (length < other.length)
		{
			length = other.length;
		}
		else
		{
			other.length = length;
		}
		return Distance(length + other.length);
	}
};

int main()
{
	Distance d1(10.5), d2(20.3);
	Distance d3 = d1 + d2;

	cout << "d1 length: " << d1.length << endl;
	cout << "d2 length: " << d2.length << endl;
	cout << "d3 length: " << d3.length << endl;

	return 0;
}