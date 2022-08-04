//2743

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void)

{

	char san[100];

	int num = 0;

	scanf("%s", san);

	for (int i = 0; san[i]; i++)

		num++;

	printf("%d", num);



	return 0;

}