//2920
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int num[8], count = 0, sum = 0, se = 0;
	for (int i = 0;i < 8;i++)
	{
		scanf("%d", &num[i]);
	}
	for (int i = 0;i < 8;i++) {
		se++;
		if (num[i] == i + 1) {
			count++;
			if (count == 7)printf("ascending");
			else if (se == 7)printf("mixed");
		}
		else if (num[i] == (8 - i)) {
			sum++;
			if (sum == 7)printf("descending");
			else if (se == 7)printf("mixed");
		}
		else if (se == 7)printf("mixed");
	}

	return 0;

}