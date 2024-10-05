#include <iostream>
#define maxBooks 20
#define maxBorrowDays 30
#define matrixSize 2
using namespace std;

class LibraryBook
{
	string bookTitle;
	string borrowerName;
	int borrowDays;

public:
	LibraryBook()
	{
		bookTitle = "Unknown";
		borrowerName = "Unknown";
		borrowDays = 0;
	}

	LibraryBook(string t, string n, int d)
	{
		bookTitle = t;
		borrowerName = n;
		borrowDays = d;
	}

	void setDetails(string t, string n, int d)
	{
		bookTitle = t;
		borrowerName = n;
		borrowDays = d;
	}

	string getBorrowerName()
	{
		return borrowerName;
	}

	string getTitle()
	{
		return bookTitle;
	}

	int getBorrowDays()
	{
		return borrowDays;
	}

	void getDetails(int n)
	{
		cout << "Book " << n << ":" << endl;
		cout << "Book Title : " << bookTitle << endl;
		cout << "Borrower   : " << borrowerName << endl;
		cout << "Borrow Days: " << borrowDays << endl;
		cout << endl;
	}
};

void getInputFromUser(LibraryBook books[maxBooks])
{
	for (int i = 0; i < maxBooks; i++)
	{
		LibraryBook book;

		string title;
		string borrower;
		int borrowDays;
		cout << "Enter details for Book " << (i + 1) << ": (title, borrower, borrowDays)" << endl;
		cin >> title;
		cin >> borrower;
		cin >> borrowDays;
		book.setDetails(title, borrower, borrowDays);

		books[i] = book;
	}
}

void displayNewBooks(LibraryBook newBooks[matrixSize][matrixSize])
{
	cout << endl;
	cout << "Here are the newly borrowed books:" << endl;
	for (int i = 0; i < matrixSize; i++)
		for (int j = 0; j < matrixSize; j++)
			newBooks[i][j].getDetails(1 + (matrixSize * i + j));
}

void displayDueBooks(LibraryBook books[maxBooks])
{
	cout << endl;
	cout << "These books were borrowed more than " << maxBorrowDays << " days ago:" << endl;
	for (int i = 0; i < maxBooks; i++)
		if (books[i].getBorrowDays() > maxBorrowDays)
			cout << " - " << books[i].getTitle() << endl;
}

void getBorrowedBooksByBorrower(LibraryBook books[maxBooks])
{
	string borrower;
	cout << endl;
	cout << "Enter a borrower's name: " << endl;
	cin >> borrower;

	int n = 0;
	for (int i = 0; i < maxBooks; i++)
		if (books[i].getBorrowerName() == borrower)
			n++;
	cout << n << " books were borrowed by " << borrower << "." << endl;
}

int main()
{
	LibraryBook books[maxBooks] = {};
	getInputFromUser(books);
	displayDueBooks(books);
	getBorrowedBooksByBorrower(books);

	LibraryBook newBooks[matrixSize][matrixSize] = {
		{LibraryBook("Never Stop Learning", "Shahriar", 7), LibraryBook("How to Talk to Anyone", "Abrar", 7)},
		{LibraryBook("Atomic Habits", "Fikrat", 35), LibraryBook("The Art of Communication", "Arefin", 14)}};
	displayNewBooks(newBooks);

	return 0;
}