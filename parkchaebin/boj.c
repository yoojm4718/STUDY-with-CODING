//9020
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int T, num, n, p[10001] = { 0 }, a, b;
	scanf("%d", &T);
	p[2] = 1;
	for (int i = 3;i < 10001;i += 2)
		p[i] = 1;
	for (int i = 3;i < 10001;i += 2)
	{
		for (int j = 3;j <= i;j += 2)
			if (i * j <= 10000)
				p[i * j] = 0;
	}
	for (int i = 0;i < T;i++)
	{
		num = 2;
		scanf("%d", &n);
		while (n >= 2 * num)
		{
			if (p[num] == 1 && p[n - num] == 1)
				a = num, b = n - num;
			num++;
		}
		printf("%d %d\n", a, b);
	}

	return 0;
}