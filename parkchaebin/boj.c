//2744
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char san[100];
	scanf("%s", san);
	for (int i = 0;san[i];i++)
	{
		if (isupper(san[i]) != 0) san[i] = tolower(san[i]);
		else if (islower(san[i]) != 0) san[i] = toupper(san[i]);
	}
	printf("%s", san);

	return 0;
}