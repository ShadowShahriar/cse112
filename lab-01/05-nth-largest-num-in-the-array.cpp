#include <iostream>
#include <limits.h>
#define size 10
using namespace std;

int arr[size];
int N = 5;

int getLargest()
{
	int i = 0;
	int largest = INT_MIN;

	for (i = 0; i < size; i++)
		if (arr[i] > largest)
			largest = arr[i];

	for (i = 0; i < size; i++)
		if (arr[i] == largest)
			arr[i] = INT_MIN;

	return largest;
}

int main()
{
	for (int i = 0; i < size; i++)
		cin >> arr[i];
	while (N--)
		cout << getLargest() << endl;
	return 0;
}