//2292
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int hy(int N, int num);

int main(void)
{
	int num = 0;
	long long N;
	scanf("%llu", &N);
	if (N == 1)printf("1");
	else printf("%d", hy(N, num));
	return 0;
}
int hy(int N, int num) {
	for (int i = 0;;i++)
	{
		num += 6 * i;
		if (N <= 1 + num)return i + 1;
	}

}