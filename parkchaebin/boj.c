#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num, n1, n2, res;
	scanf("%d", &num);
	for (int i = 0;i < num;i++)
	{
		scanf("%d %d", &n1, &n2);
		res = pow(n1, n2);
		res = res % 10;
		printf("%d", res);
	}
	return 0;
}