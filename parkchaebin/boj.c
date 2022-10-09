//2750
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int N, i, j, A[1000], tmp;

	scanf("%d", &N);

	for (i = 0;i < N;i++)
	{
		scanf("%d", &A[i]);
	}

	for (i = 0;i < N;i++)
	{
		for (j = i;j < N;j++)
		{
			if (A[i] > A[j]) {
				tmp = A[i];
				A[i] = A[j];
				A[j] = tmp;
			}
		}
	}

	for (i = 0;i < N;i++)
		printf("%d\n", A[i]);
	return 0;
}