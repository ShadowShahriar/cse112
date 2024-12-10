#include <iostream>
using namespace std;

class Library
{
protected:
	string lib_name, location;

public:
	void set_library(string lN, string ln)
	{
		lib_name = lN;
		location = ln;
	}
};

class Section : public Library
{
protected:
	string section_name;
	int section_code;

public:
	void set_section(string sn, int sc)
	{
		section_name = sn;
		section_code = sc;
	}
};

class Book : public Section
{
protected:
	string book_name, author;
	long long int isbn;

public:
	Book(string bn, string a, long long int i) : book_name(bn), author(a), isbn(i) {}

	void display_info()
	{
		cout << "Library Name: " << Library::lib_name << endl;
		cout << "Location: " << Library::location << endl;
		cout << endl;
		cout << "Section Name: " << Section::section_name << endl;
		cout << "Section Code: " << Section::section_code << endl;
		cout << endl;
		cout << "Book Information:" << endl;
		cout << "Title      : " << book_name << endl;
		cout << "Author     : " << author << endl;
		cout << "ISBN Number: " << isbn << endl;
	}
};

int main()
{
	Book book("Never Give Up", "Shahriar", 1100234532);
	book.set_library("Hriddy", "Mirpur 11");
	book.set_section("Self Help", 154);
	book.display_info();
	return 0;
}