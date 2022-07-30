//1929
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdbool.h>

int main(void)
{
	long long M, N;
	bool num[1000001] = { false };//00
	scanf("%llu %llu", &M, &N);
	num[2] = true;
	for (long long i = 3;i < 1000000;i += 2)
		num[i] = true;
	for (long long i = 3;i < 1000000;i += 2)
	{
		for (long long j = i;;j += 2)
		{
			if (i * j >= 1000000)break;
			else num[i * j] = false;
		}
	}
	for (long long i = M;i <= N;i++)
		if (num[i] == true)printf("%llu\n", i);
	return 0;
}