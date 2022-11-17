//25372
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {

	int N;
	char san[20];

	scanf("%d", &N);

	for (int i = 0;i < N;i++)
	{
		scanf("%s", san);
		if (strlen(san) <= 9 && strlen(san) >= 6)printf("yes\n");
		else printf("no\n");
	}

	return 0;
}