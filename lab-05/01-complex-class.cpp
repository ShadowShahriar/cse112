#include <iostream>
using namespace std;

class Complex
{
	int real;
	int img;

public:
	void setData()
	{
		cin >> real >> img;
	}

	void setData(int r, int i)
	{
		real = r;
		img = i;
	}

	void display()
	{
		cout << "Real:      " << real << endl;
		cout << "Imaginary: " << img << endl;
	}

	Complex()
	{
	}

	Complex(Complex &c1)
	{
		real = c1.real;
		img = c1.img;
	}

	friend Complex sum(Complex c1, Complex c2);
};

Complex sum(Complex c1, Complex c2)
{
	Complex c4;
	c4.setData(c1.real + c2.real, c1.img + c2.img);
	return c4;
}

int main()
{
	Complex c1;
	Complex c2;

	c1.setData(5, 2);
	c2.setData(5, 4);

	Complex c3;
	c3 = sum(c1, c2);
	c3.display();

	return 0;
}