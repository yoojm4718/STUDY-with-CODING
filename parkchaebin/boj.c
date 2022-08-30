//9086
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int T, len;
	char san[100];
	scanf("%d", &T);
	for (int i = 0;i < T;i++)
	{
		scanf("%s", san);
		len = strlen(san);
		printf("%c%c\n", san[0], san[len - 1]);
	}

	return 0;
}