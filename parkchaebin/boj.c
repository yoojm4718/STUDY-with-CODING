//11050
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int N, K, count = 1;
	scanf("%d %d", &N, &K);
	for (int i = K + 1;i <= N;i++)
		count *= i;
	for (int i = 2;i <= (N - K);i++)
		count /= i;
	printf("%d", count);
	return 0;
}