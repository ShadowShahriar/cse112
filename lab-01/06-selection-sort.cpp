#include <iostream>
using namespace std;

void swapfn(int *a, int *b)
{
	int temp = *b;
	*b = *a;
	*a = temp;
}

int main()
{
	int n = 5;
	int arr[n] = {492, 112, 24, 54, 76};

	// 1 = smallest to largest,
	// 0 = largest to smallest
	int ascending = 1;

	int i = 0, j = 0;
	for (i = 0; i < n; i++)
		for (j = i + 1; j < n; j++)
			if (ascending ? arr[i] > arr[j] : arr[i] < arr[j])
				swapfn(&arr[i], &arr[j]);

	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	return 0;
}