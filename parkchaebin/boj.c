//10797
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int n, sum = 0;
	int a[5];

	scanf("%d", &n);
	scanf("%d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4]);

	for (int i = 0;i < 5;i++)
		if (n == a[i])sum++;
	printf("%d", sum);


	return 0;
}