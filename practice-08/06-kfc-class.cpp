#include <iostream>
using namespace std;

class KFC
{
	string orders[5];

public:
	void chooseFood(string f1, string f2, string f3)
	{
		orders[0] = f1;
		orders[1] = f2;
		orders[2] = f3;
	}

	void chooseFood(string f1, string f2, string f3, string f4)
	{
		orders[0] = f1;
		orders[1] = f2;
		orders[2] = f3;
		orders[3] = f4;
	}

	void chooseFood(string f1, string f2, string f3, string f4, string f5)
	{
		orders[0] = f1;
		orders[1] = f2;
		orders[2] = f3;
		orders[3] = f4;
		orders[4] = f5;
	}

	void displayOrders()
	{
		for (int i = 0; i < 5; i++)
			if (orders[i] != "")
				cout << orders[i] << endl;
	}
};

int main()
{
	KFC restaurant;

	restaurant.chooseFood("Pizza", "Burger", "Coke");
	restaurant.displayOrders();
	cout << endl;

	restaurant.chooseFood("Meatballs", "Burger", "Mirinda", "Desert");
	restaurant.displayOrders();
	cout << endl;

	restaurant.chooseFood("Sweetpuffs", "Chocobursts", "Red Velvet", "Desert", "Takeout");
	restaurant.displayOrders();

	return 0;
}