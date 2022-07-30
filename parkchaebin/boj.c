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
	printf("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n");
	something(num);
	printf("라고 답변하였지.\n");
	return 0;
}
int something(int num) {
	f_(tmp - num);
	printf("\"재귀함수가 뭔가요?\"\n");
	if (num > 0)
	{
		f_(tmp - num);
		printf("\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n");
		f_(tmp - num);
		printf("마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n");
		f_(tmp - num);
		printf("그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n");
	}
	if (num == 0) {
		f_(tmp - num);
		printf("\"재귀함수는 자기 자신을 호출하는 함수라네\"\n");
		return 0;
	}
	num--;
	something(num);
	if (num >= -1) {
		f_(tmp - num);
		printf("라고 답변하였지.\n");
	}
	return 0;
}
void f_(int num) {
	for (int i = 0;i < num;i++)
		printf("____");
}