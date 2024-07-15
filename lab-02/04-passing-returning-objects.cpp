#include <iostream>
using namespace std;

class Complex
{
private:
	int real;
	int img;

public:
	void set_data(int r, int i)
	{
		real = r;
		img = i;
	}

	void get_data()
	{
		cout << "Real part:      " << real << endl;
		cout << "Imaginary part: " << img << endl;
		cout << "Notation:       " << real << " + " << img << "i" << endl;
	}

	Complex sum(Complex c1, Complex c2)
	{
		Complex temp;
		temp.real = c1.real + c2.real;
		temp.img = c1.img + c2.img;
		return temp;
	}
};

int main()
{
	cout << "Complex 1:" << endl;
	Complex comp1;
	comp1.set_data(10, 3);
	comp1.get_data();

	cout << endl;
	cout << "Complex 2:" << endl;
	Complex comp2;
	comp2.set_data(20, 7);
	comp2.get_data();

	cout << endl;
	cout << "Complex 3:" << endl;
	Complex comp3;
	comp3.sum(comp1, comp2).get_data();

	// This is also possible
	// comp3.get_data();
	return 0;
}