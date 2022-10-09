//25305
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N1, N2, i, j, sep[1000], tmp;
	scanf("%d %d", &N1, &N2);
	for (i = 0;i < N1;i++)
	{
		scanf("%d", &sep[i]);
	}

	for (i = 0;i < N1;i++)
	{
		for (j = i;j < N1;j++)
		{
			if (sep[i] < sep[j]) {
				tmp = sep[i];
				sep[i] = sep[j];
				sep[j] = tmp;
			}
		}
	}

	printf("%d", sep[--N2]);

	return 0;
}