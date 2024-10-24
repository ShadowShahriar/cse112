#include <iostream>
#define size 2
using namespace std;

class LibraryBook
{
	string bookTitle;
	string borrowerName;
	int borrowDays;

public:
	LibraryBook() {}

	LibraryBook(string t, string b, int d)
	{
		bookTitle = t;
		borrowerName = b;
		borrowDays = d;
	}

	LibraryBook(const LibraryBook &lib)
	{
		bookTitle = lib.bookTitle;
		borrowerName = lib.borrowerName;
		borrowDays = lib.borrowDays;
	}

	void displayBook()
	{
		cout << "Book title: " << bookTitle << endl;
		cout << "Borrower: " << borrowerName << endl;
		cout << "Borrow days: " << borrowDays << endl;
		cout << endl;
	}

	int getBorrowDays()
	{
		return borrowDays;
	}

	string getBorrower()
	{
		return borrowerName;
	}
};

void getLongestBorrowedBook(LibraryBook library[size][size])
{
	int maxBorrowed = 0;
	LibraryBook lib;

	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			int borrowDays = library[i][j].getBorrowDays();
			if (borrowDays > maxBorrowed)
			{
				maxBorrowed = borrowDays;
				lib = library[i][j];
			}
		}
	}

	cout << "Book information with max borrow days:" << endl;
	lib.displayBook();
}

void getBooksFromBorrower(LibraryBook library[size][size])
{
	string borrowerName;
	cout << "Enter borrower name:" << endl;
	cin >> borrowerName;
	int b = 0;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			if (library[i][j].getBorrower() == borrowerName)
				b++;
		}
	}
	cout << "Total books borrowed by " << borrowerName << ": " << b;
}

int main()
{
	LibraryBook library[size][size] = {
		{LibraryBook("Book 1", "Shahriar", 4), LibraryBook("Book 2", "Shahriar", 6)},
		{LibraryBook("Book 3", "Hakim", 37), LibraryBook("Book 4", "Shahriar", 3)}};

	getLongestBorrowedBook(library);
	getBooksFromBorrower(library);
	return 0;
}