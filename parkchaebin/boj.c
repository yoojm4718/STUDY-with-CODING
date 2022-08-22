//25304
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	long long x, a, sum = 0;
	int n, b;
	scanf("%llu", &x);
	scanf("%d", &n);
	for (int i = 0;i < n;i++)
	{
		scanf("%llu %d", &a, &b);
		sum += (a * b);
	}
	if (x == sum)printf("Yes");
	else printf("No");
	return 0;
}