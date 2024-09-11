#include <iostream>
using namespace std;

class Item
{
private:
	int data;

public:
	void setData(int d)
	{
		data = d;
	}

	int getData()
	{
		return data;
	}
};

int main()
{
	Item i;
	i.setData(42);
	cout << i.getData() << endl;
	return 0;
}