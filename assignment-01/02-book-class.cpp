#include <iostream>
using namespace std;

class Book
{
	string title;
	string author;
	int pages;

public:
	void assignBook(string t, string a, int p)
	{
		title = t;
		author = a;
		pages = p;
	}

	void displayBook()
	{
		cout << "Name  :  " << title << endl;
		cout << "Author:  " << author << endl;
		cout << "Pages :  " << pages << endl;
	}

	int getPages()
	{
		return pages;
	}
};

Book *compareBooks(Book *b1, Book *b2)
{
	if (b1->getPages() > b2->getPages())
		return b1;
	else
		return b2;
}

int main()
{
	Book book1, book2;
	book1.assignBook("Atomic Habits", "James Clear", 320);
	book2.assignBook("Show Your Work!", "Austin Kleon", 224);

	cout << "Book 1:" << endl;
	book1.displayBook();

	cout << endl;
	cout << "Book 2:" << endl;
	book2.displayBook();

	Book *bookMaxPage = compareBooks(&book1, &book2);

	cout << endl;
	cout << "Book with more pages:" << endl;
	bookMaxPage->displayBook();
	return 0;
}