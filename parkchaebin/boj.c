//1316
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int num, count = 0, n, re = 0;
	char san[100];
	scanf("%d", &num);
	for (int i = 0;i < num;i++) {
		n = 0;
		scanf("%s", san);
		for (int p = 0;san[p];p++)
			if (san[p + 1] == 0) re = p + 1;
		if (re > 2) {
			for (int j = 2;j < re;j++)
			{
				for (int k = 0;k < j;k++)
				{
					if (san[j] == san[k] && san[j - 1] != san[j]) {
						n--;
						break;
					}
					if (k == j - 1)n++;
				}
			}
			if (n == re - 2)count++;
		}
		else count++;
	}
	printf("%d", count);

	return 0;
}