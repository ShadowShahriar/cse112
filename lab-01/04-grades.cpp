#include <iostream>
using namespace std;

int main()
{
	int marks = 0;
	char grade = 'F';
	cin >> marks;

	if (marks >= 90 && marks <= 100)
		grade = 'A';
	else if (marks >= 80 && marks <= 89)
		grade = 'B';
	else if (marks >= 70 && marks <= 79)
		grade = 'C';
	else if (marks >= 60 && marks <= 69)
		grade = 'D';
	else if (marks >= 0 && marks <= 59)
		grade = 'F';

	cout << "Your grade is " << grade;
	return 0;
}