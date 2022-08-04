//1193

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main(void)

{

	long long n, i, j = 1;

	int n1 = 1, n2 = 1;

	scanf("%llu", &n);

	if (n == 1)printf("1/1");

	else

	{

		while (1)

		{

			if (n1 == 1) {

				n2++;

				j++;

				if (j >= n)break;

				while (n2 != 1) {

					n1++;

					n2--;

					j++;

					if (j >= n)break;

				}

				if (j >= n)break;

			}

			else if (n2 == 1) {

				n1++;

				j++;

				if (j >= n)break;

				while (n1 != 1) {

					n2++;

					n1--;

					j++;

					if (j >= n)break;

				}

				if (j >= n)break;

			}

		}

		printf("%d/%d", n1, n2);

	}





	return 0;

}