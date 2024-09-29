#include <iostream>
using namespace std;

class Game
{
	int kill_count;
	int death_count;

public:
	Game(int k, int d) : kill_count(k), death_count(d)
	{
	}

	void setInfo(int k, int d)
	{
		kill_count = k;
		death_count = d;
	}

	void getInfo(int n)
	{
		cout << "Game " << n << endl;
		cout << "Kill Count : " << kill_count << endl;
		cout << "Death Count: " << death_count << endl;
		cout << endl;
	}
};

Game reset(Game g, int k, int d)
{
	g.setInfo(k, d);
	return g;
}

int main()
{
	Game g1(0, 0);
	g1 = reset(g1, 24, 48);

	Game g2(30, 20);
	g2 = reset(g2, 10, 5);

	g1.getInfo(1);
	g2.getInfo(2);
	return 0;
}