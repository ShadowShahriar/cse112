#include <iostream>
using namespace std;

class Parents
{
public:
	void display()
	{
		cout << "Line Parents 1" << endl;
		cout << "Line Parents 2" << endl;
	}

	void method1()
	{
		cout << "Response Parents 1" << endl;
	}
};

class Kaniz : public Parents
{
public:
	void display()
	{
		cout << "Line Kaniz 1" << endl;
	}

	void method2()
	{
		cout << "Response Kaniz 2" << endl;
	}
};

int main()
{
	Parents P;
	Kaniz K;

	P.display();
	P.method1();

	K.display();
	K.method1();
	K.method2();
	return 0;
}