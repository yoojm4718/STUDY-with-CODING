//2754
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char san[3];
	scanf("%s", san);
	if (san[0] == 'A') {
		if (san[1] == '+')printf("4.3");
		else if (san[1] == '-')printf("3.7");
		else printf("4.0");
	}
	else if (san[0] == 'B') {
		if (san[1] == '+')printf("3.3");
		else if (san[1] == '-')printf("2.7");
		else printf("3.0");
	}
	else if (san[0] == 'C') {
		if (san[1] == '+')printf("2.3");
		else if (san[1] == '-')printf("1.7");
		else printf("2.0");
	}
	else if (san[0] == 'D') {
		if (san[1] == '+')printf("1.3");
		else if (san[1] == '-')printf("0.7");
		else printf("1.0");
	}
	else printf("0.0");

	return 0;
}