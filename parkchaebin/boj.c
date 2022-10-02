//1292
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int A, B, count = 0, arr[1001] = { 0 }, n = 1;
	scanf("%d %d", &A, &B);
	for (int i = 1;n <= 1000;i++)
	{
		for (int j = 1;j <= i;j++)
		{
			arr[n] = i;
			n++;
			if (n > 1000)break;
		}
	}
	for (int i = A;i <= B;i++)
	{
		count += arr[i];
	}
	printf("%d", count);

	return 0;
}