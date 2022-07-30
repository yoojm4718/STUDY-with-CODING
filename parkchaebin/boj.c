//1712
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

long long BEP(long long A, long long B, long long C);

int main(void)
{
	long long A, B, C;
	scanf("%llu %llu %llu", &A, &B, &C);
	if (BEP(A, B, C) >= 0)
		printf("%llu", BEP(A, B, C));
	else printf("-1");
	return 0;
}
long long BEP(long long A, long long B, long long C) {
	if (C <= B)return -1;
	else return A / (C - B) + 1;
}