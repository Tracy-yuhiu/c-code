#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
menu()
{
	printf("**************************\n");
	printf("**** ��ʼ:1   �˳���0 ****\n");
	printf("**************************\n");
}
game()
{
	int tep = 0;
	int b = 0;
	srand((unsigned)time(NULL));
	tep = rand() % 100;
	printf("����������\n");
	while (1)
	{
		scanf("%d", &b);
		if (b < tep)
		{
			printf("��С��\n");
		}
		else if (b > tep)
		{
			printf("�´���\n");
		}
		else
		{
			printf("��ϲ�㣬�¶���\n");
			break;
		}
	}
}
int main()
{
	int a = 0;
	do
	{
		menu();
		printf("�����룺->");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		game();
	} while (a);
	return 0;
}