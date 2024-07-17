#include <stdio.h>
int main()
{
	long long int A, B, C, D, E;
	scanf("%llu %llu %llu %llu", &A, &B, &C, &D);
	E = A - (B + C + D);
	printf("%llu", E);
	return 0;
}