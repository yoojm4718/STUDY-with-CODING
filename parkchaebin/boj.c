//1037
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
	int min = 1000000, max = 1, N;
	long long sum;
	int arr[50];

	scanf("%d", &N);

	for (int i = 0;i < N;i++)
	{

		scanf("%d", &arr[i]);

		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}

	sum = min * max;

	printf("%lld", sum);

	return 0;
}