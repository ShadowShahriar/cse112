#include <iostream>
#include <ctime>
using namespace std;

struct Date
{
	int year;
	int month;
	int date;
};

Date extractDate(int YYYYMMDD)
{
	int year = YYYYMMDD / 10000;
	int month = (YYYYMMDD / 100) % 100;
	int date = YYYYMMDD % 100;

	Date dateObj;
	dateObj.year = year;
	dateObj.month = month;
	dateObj.date = date;
	return dateObj;
}

int getCurrentDate()
{
	time_t tt;
	struct tm *ti;
	time(&tt);
	ti = localtime(&tt);

	int currentDate = 0;
	currentDate += ti->tm_mday;
	currentDate += (ti->tm_mon + 1) * 100;
	currentDate += (1900 + ti->tm_year) * 10000;
	return currentDate;
}

/** ===
 * the following functions were borrowed and modified from GeeksForGeeks
 * - countLeapYears(Date date)
 * - countPreviousDays(Date dateObj)
 * - getDateDifference(Date start, Date end)
 *
 * @author Abhay Rathi
 * @link https://www.geeksforgeeks.org/find-number-of-days-between-two-given-dates/
 *  ===
 **/

const int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int countLeapYears(Date date)
{
	int years = date.year;

	// === check if the given year needs to be considered for the count of leap years ===
	if (date.month <= 2)
		years--;

	// === we know that a year is a leap year if it is a multiple of 4, multiple of 400 and not a multiple of 100 ===
	return years / 4 - years / 100 + years / 400;
}

int countPreviousDays(Date dateObj)
{
	// === convert the year to days and add current date ===
	long int days = dateObj.year * 365 + dateObj.date;

	// === convert the month to days ===
	for (int i = 0; i < dateObj.month - 1; i++)
		days += monthDays[i];

	// === add all leap years before the current year ===
	days += countLeapYears(dateObj);
	return days;
}

int getDateDifference(Date start, Date end)
{
	int pStart = countPreviousDays(start);
	int pEnd = countPreviousDays(end);
	return pEnd - pStart;
}

// === relevant portion ===
class BookAccount
{
	double fine;
	float fineMultiplier = 0.50;

	int calculateOverdueDays(int borrowDate, int currentDate)
	{
		Date start = extractDate(borrowDate);
		Date end = extractDate(currentDate);

		int overdue = getDateDifference(start, end);
		return overdue;
	}

	double calculateFine(int overdueDays)
	{
		return overdueDays * fineMultiplier;
	}

public:
	string bookID;
	string borrowerName;

	void display()
	{
		cout << "Book ID      : " << bookID << endl;
		cout << "Borrower Name: " << borrowerName << endl;
		cout << "Current Fine : " << fine << "$" << endl;
	}

	BookAccount(string bID, string bName, int bDate)
	{
		bookID = bID;
		borrowerName = bName;

		int overdueDays = calculateOverdueDays(bDate, getCurrentDate());
		fine = calculateFine(overdueDays);
	}

	~BookAccount()
	{
		display();
		cout << "Account closed." << endl;
	}
};

int main()
{
	BookAccount account("Never Stop Learning", "Shahriar", 20241001);
	return 0;
}