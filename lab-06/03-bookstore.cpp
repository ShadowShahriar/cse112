#include <iostream>
#define bookCount 3
using namespace std;

class Book
{
	string title;
	string author;
	int stock;
	int threshold;

public:
	Book(string t, string a, int s, int th)
	{
		title = t;
		author = a;
		stock = s;
		threshold = th;
	}

	void display()
	{
		cout << "Title     : " << title << endl;
		cout << "Author    : " << author << endl;
		cout << "Stock     : " << stock << endl;
		cout << "Threshold : " << threshold << endl;
		cout << endl;
	}

	friend void checkAndRestock(Book books[bookCount], int restockAmount);
};

void checkAndRestock(Book books[bookCount], int restockAmount)
{
	cout << "==== The following books require restock ====" << endl;
	for (int i = 0; i < bookCount; i++)
	{
		int currentStock = books[i].stock;
		int currentThreshold = books[i].threshold;

		if (currentStock < currentThreshold)
		{
			int reorderAmount = currentThreshold - currentStock;
			cout << books[i].title;
			cout << " (Reorder Amount: " << reorderAmount;
			cout << ")" << endl;
			books[i].stock = currentStock + restockAmount + reorderAmount;
		}
		else
		{
			books[i].stock = currentStock + restockAmount;
		}
	}

	cout << endl;
	cout << "==== Updated stock ====" << endl;
	for (int i = 0; i < bookCount; i++)
		books[i].display();
}

int main()
{
	Book books[bookCount] = {
		Book("Never Stop Learning", "Ayman Sadik", 3, 5),
		Book("How to Talk to Anyone", "Sadman Sadik", 6, 5),
		Book("How to Deal with Difficult People", "Andrew Louis", 2, 4),
	};

	cout << "==== Current stock ====" << endl;
	for (int i = 0; i < bookCount; i++)
		books[i].display();

	checkAndRestock(books, 5);
	return 0;
}