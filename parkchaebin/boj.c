//17478
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int num;
int tmp;
int something(int num);
void f_(int num);
int main(void)
{
	scanf("%d", &num);
	tmp = num;
	printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
	something(num);
	printf("��� �亯�Ͽ���.\n");
	return 0;
}
int something(int num) {
	f_(tmp - num);
	printf("\"����Լ��� ������?\"\n");
	if (num > 0)
	{
		f_(tmp - num);
		printf("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");
		f_(tmp - num);
		printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");
		f_(tmp - num);
		printf("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");
	}
	if (num == 0) {
		f_(tmp - num);
		printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
		return 0;
	}
	num--;
	something(num);
	if (num >= -1) {
		f_(tmp - num);
		printf("��� �亯�Ͽ���.\n");
	}
	return 0;
}
void f_(int num) {
	for (int i = 0;i < num;i++)
		printf("____");
}