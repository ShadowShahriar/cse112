#include <iostream>
using namespace std;

class Product
{
	string name;
	float price;
	int quantity;

public:
	Product(string n, float p, int q)
	{
		setProduct(n, p, q);
	}

	~Product()
	{
		cout << "Product object destroyed" << endl;
	}

	void setProduct(string n, float p, int q)
	{
		name = n;
		price = p;
		quantity = q;
	}

	void printProduct()
	{
		cout << "Name:     " << name << endl;
		cout << "Price:    " << price << endl;
		cout << "Quantity: " << quantity << endl;
	}
};

int main()
{
	Product p("Biscuits", 10.00, 1);
	p.printProduct();
	return 0;
}