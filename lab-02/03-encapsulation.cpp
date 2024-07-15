#include <iostream>
using namespace std;

class Book
{
private:
	string title;
	string author;
	int publication_year;

public:
	Book()
	{
		title = "Never Stop Learning";
		author = "Ayman Sadiq";
		publication_year = 2021;
	}

	void show()
	{
		cout << "Title:            " << title << endl;
		cout << "Author:           " << author << endl;
		cout << "Publication Year: " << publication_year << endl;
	}
};

int main()
{
	Book book1;
	book1.show();
	return 0;
}