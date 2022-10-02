//11655
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char san[100];
	gets(san);
	for (int i = 0;san[i];i++)
	{
		if ((san[i] >= 'a' && san[i] <= 'z') || (san[i] >= 'A' && san[i] <= 'Z'))
			if (((san[i] + 13) > 'Z' && san[i] <= 'Z') || ((san[i] + 13) > 'z' && san[i] <= 'z'))
				printf("%c", san[i] - 13);
			else
				printf("%c", san[i] + 13);
		else
			printf("%c", san[i]);
	}

	return 0;
}