#include <stdio.h>
#include <string.h>

int main()
{
	int length = 0;
	int k = 0;
	char str[1000000] = {0};
	char str2[1000000] = {0};
	gets(str);

	for (int i = 0; str[i] != '\0'; i++)
		length++;

	for (int j = 0; j < length; j++)
	{
		if (str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'v')
		{
		}
		else
		{
			str2[k] = str[j];
			k++;
		}
	}

	char str3[1000000] = {0};
	for (int i = 0; i < k; i++)
		str3[k - i - 1] = str2[i];

	if (strcmp(str2, str3) == 0 || length == 0)
		printf("YES");
	else
		printf("NO");
	return 0;
}