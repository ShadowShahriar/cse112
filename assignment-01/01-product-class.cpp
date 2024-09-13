#include <iostream>
using namespace std;

class Product
{
	string productName;
	float price;
	int quantity;

public:
	Product(string n, float p, int q)
	{
		productName = n;
		price = p;
		quantity = q;
	}

	void display(int i)
	{
		cout << i << endl;
		cout << "Product : " << productName << endl;
		cout << "Price   : " << price << "/=" << endl;
		cout << "Quantity: " << quantity << endl;
		cout << endl;
	}
};

int main()
{
	const int row = 2;
	const int column = 2;
	Product shop[row][column] = {
		{Product("Toast Biscuit", 110, 2), Product("Soap", 50, 4)},
		{Product("Shampoo", 180, 1), Product("Kitkat", 105, 1)}};

	for (int r = 0; r < row; r++)
		for (int c = 0; c < column; c++)
			shop[r][c].display((c + 1) + (row * r));

	return 0;
}