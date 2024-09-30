#include <iostream>
using namespace std;

class Book
{
	string title, author;

public:
	Book()
	{
		title = "Unknown";
		author = "Unknown";
	}

	void readBook()
	{
		cout << "Reading " << title << " by " << author << endl;
	}

	void displayBook()
	{
		cout << "Title : " << title << endl;
		cout << "Author: " << author << endl;
	}
};

int main()
{
	Book b1;
	b1.readBook();
	b1.displayBook();
	return 0;
}