//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//#include <math.h>
//
//int return_number(int cor[]);
//int dis(int cor[]);
//int rad_sub(int cor[]);
//
//int main(void)
//{
//	int num, cor[6];
//	scanf("%d", &num);
//	for (int i = 0;i < num;i++)
//	{
//		for (int j = 0;j < 6;j++)
//		{
//			printf("%d\n", j);
//			scanf("%d", &cor[j]);
//		}
//		printf("%d\n", return_number(cor[6]));
//	}
//
//	return 0;
//}
//int return_number(int cor[]) {
//	int distance = sqrt(dis(cor[6]));
//	int radius_sub = rad_sub(cor[6]);
//	if ((cor[0] == cor[3]) && (cor[1] == cor[4]) && (cor[2] == cor[5]))return -1;
//	else if ((cor[2] + cor[5]) < distance || radius_sub > distance)return 0;
//	else if ((cor[2] + cor[5]) == distance || radius_sub == distance)return 1;
//	else return 2;
//}
//int dis(int cor[]) {
//	int dis;
//	dis = pow(cor[0] - cor[3], 2) + pow(cor[1] - cor[4], 2);
//	return dis;
//}
//int rad_sub(int cor[]) {
//	if ((cor[2] - cor[5]) < 0)return cor[5] - cor[2];
//	else return cor[2] - cor[5];
//}

#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <conio.h>

int main(void)
{
	int num, sum = 0, count = 0;
	char c, d = 'x';
	scanf("%d", &num);
	for (int i = 0;i < num;i++)
	{
		d = 'x';
		count = 0;
		sum = 0;
		do
		{
			c = getche();
			if (c == 'x')count = 0;
			else if (c == 'o') {
				count++;
				sum += count;
			}
			else break;
			d = c;
		} while (isalpha(c));
		puts("");
		printf("%d\n", sum);
	}
	return 0;
}