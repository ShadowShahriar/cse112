#include <iostream>
#include <limits.h>
using namespace std;

int main()
{
	int largest = INT_MIN;
	int n = 10;
	int arr[n];

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n; i++)
		if (arr[i] > largest)
			largest = arr[i];

	cout << "The largest number in the given array is: " << largest;
	return 0;
}