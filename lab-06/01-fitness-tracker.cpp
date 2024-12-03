#include <iostream>
using namespace std;

class FitnessTracker;
class HealthApp
{
public:
	int showDailySteps(FitnessTracker ft);
};

class FitnessTracker
{
	string username;
	int dailySteps;

public:
	FitnessTracker(string usr, int dS)
	{
		username = usr;
		dailySteps = dS;
	}

	friend int HealthApp::showDailySteps(FitnessTracker ft);
};

int HealthApp::showDailySteps(FitnessTracker ft)
{
	return ft.dailySteps;
}

int main()
{
	FitnessTracker FTR("Shahriar", 2560);
	HealthApp HPP;
	cout << HPP.showDailySteps(FTR);
	return 0;
}