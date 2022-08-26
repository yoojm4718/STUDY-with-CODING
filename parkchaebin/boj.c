//10807
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	unsigned int N;
	int num[100], v, count = 0, len = 0;
	scanf("%d", &N);
	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num[i]);
	}
	scanf("%d", &v);
	for (int i = 0; i < N; i++)
	{
		if (num[i] == v)count++;
	}
	printf("%d", count);


	return 0;

}