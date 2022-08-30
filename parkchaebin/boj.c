//15964
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	long long A, B;
	scanf("%lld %lld", &A, &B);
	printf("%lld", (A + B) * (A - B));

	return 0;
}