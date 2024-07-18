#include <stdio.h>
int main()
{
	int N = 0;
	unsigned long long int R = 1;
	scanf("%d", &N);

	for (int I = 2; I <= N; I++)
	{
		R *= I;
		R %= 10000;
	}

	R == 0 ? printf("0000") : printf("%d", R);
	return 0;
}