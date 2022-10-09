//25501
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int c1 = 0, c2 = 0;
int recursion(const char* s, int l, int r) {
	c1++;
	if (l >= r) return 1;
	else if (s[l] != s[r]) return 0;
	else return recursion(s, l + 1, r - 1);
}

int isPalindrome(const char* s) {
	c2 = recursion(s, 0, strlen(s) - 1);
	return recursion(s, 0, strlen(s) - 1);
}

int main(void)
{
	int N, i;
	char sep[1000];

	scanf("%d", &N);

	for (i = 0;i < N;i++)
	{
		scanf("%s", sep);
		isPalindrome(sep);
		printf("%d %d\n", c2, c1 / 2);
		c1 = 0, c2 = 0;
	}

	return 0;
}