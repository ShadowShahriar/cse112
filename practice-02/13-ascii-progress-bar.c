#include <stdio.h>
#include <math.h>

int main()
{
	double N;
	int M;
	scanf("%lf", &N);
	M = N;
	if (M % 10 != 0)
		M -= M % 10;
	M /= 10;

	printf("[");
	for (int I = 1; I <= 10; I++)
		I <= M ? printf("+") : printf(".");
	printf("]");
	printf(" %.0f%%", trunc(N));
	return 0;
}