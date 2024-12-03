#include <iostream>
using namespace std;

class MyClass
{
	int x;

public:
	MyClass() {}

	MyClass(int x)
	{
		this->x = x;
	}

	void set_x(int i)
	{
		x = i;
	}

	void display()
	{
		cout << this->x << endl;
	}

	~MyClass()
	{
		cout << "Destructor: " << x << endl;
	}
};

int main()
{
	MyClass *ptr;
	ptr = new MyClass[3];

	for (int i = 0; i < 3; i++)
		ptr[i].set_x(i);

	if (ptr == NULL)
	{
		cout << "Allocation Error" << endl;
		return 1;
	}

	for (int i = 0; i < 3; i++)
		ptr[i].display();

	delete[] ptr;
	return 0;
}