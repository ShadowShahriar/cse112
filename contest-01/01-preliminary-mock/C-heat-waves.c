#include <stdio.h>

int main()
{
	int n = 0;
	float sum = 0.0;
	scanf("%d", &n);

	for (int i = 0; i < n; i++)
	{
		int val = 0;
		scanf("%d", &val);
		sum += (float)val;
	}

	float avg = sum / n;
	printf("%.2f", avg);
	return 0;
}
