#include <iostream>
using namespace std;

class Book
{
public:
	string title;
	string author;
	int pages;

	Book(string t, string a, int p)
	{
		title = t;
		author = a;
		pages = p;
	}
};

int main()
{
	Book book1("The Great Gatsby", "F. Scott Fitzgerald", 180);
	cout << "Title:  " << book1.title << endl;
	cout << "Author: " << book1.author << endl;
	cout << "Pages:  " << book1.pages << endl;
	return 0;
}