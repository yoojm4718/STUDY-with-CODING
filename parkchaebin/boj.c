//1924
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int x, y, n = 0;
	int A[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

	scanf("%d %d", &x, &y);

	for (int i = 1;i < x;i++)
		n += A[i];
	n += y;
	n %= 7;
	switch (n)
	{
	case 0: {printf("SUN");break;}
	case 1: {printf("MON");break;}
	case 2: {printf("TUE");break;}
	case 3: {printf("WED");break;}
	case 4: {printf("THU");break;}
	case 5: {printf("FRI");break;}
	case 6: {printf("SAT");break;}
	default:
		break;
	}

	return 0;
}