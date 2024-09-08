#include <iostream>
using namespace std;

class Sample
{
public:
	// === constructor ===
	Sample()
	{
		cout << "constructor was initiated" << endl;
	}

	// === destructor ===
	~Sample()
	{
		cout << "destructor was initiated" << endl;
	}
};

int main()
{
	Sample obj;
	cout << "main function was called" << endl;
	return 0;
}