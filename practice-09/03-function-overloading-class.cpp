#include <iostream>
using namespace std;

class Item
{
public:
	void display()
	{
		cout << "Nothing" << endl;
	}

	void display(int i)
	{
		cout << "Integer: " << i << endl;
	}

	void display(float f)
	{
		cout << "Float: " << f << endl;
	}
};

int main()
{
	Item that;
	that.display();
	that.display(1);
	that.display(1.1f);
	return 0;
}