#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
menu()
{
	printf("**************************\n");
	printf("**** 开始:1   退出：0 ****\n");
	printf("**************************\n");
}
game()
{
	int tep = 0;
	int b = 0;
	srand((unsigned)time(NULL));
	tep = rand() % 100;
	printf("请输入数字\n");
	while (1)
	{
		scanf("%d", &b);
		if (b < tep)
		{
			printf("猜小了\n");
		}
		else if (b > tep)
		{
			printf("猜大了\n");
		}
		else
		{
			printf("恭喜你，猜对了\n");
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
		printf("请输入：->");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		game();
	} while (a);
	return 0;
}