//11382
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	unsigned long long A[1], B[1], C[1], sum[1];
	scanf("%llu %llu %llu", &A[0], &B[0], &C[0]);
	sum[0] = A[0] + B[0] + C[0];
	printf("%llu", sum[0]);

	return 0;

}