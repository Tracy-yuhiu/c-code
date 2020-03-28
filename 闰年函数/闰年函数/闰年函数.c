#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int leap(int year)
{
	if (year % 4 == 0 && year % 100 != 0)//普通闰年：能被4整除且不能被100整除
	{
		return 1;
	}
	else if (year % 400 == 0)//世纪闰年：能被400整除
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int year = 0;
	int tep = 0;
	printf("请输入要判断的年份\n");
	scanf("%d", &year);
	tep = leap(year);
	if (tep == 1)
	{
		printf("闰年\n");
	}
	else
	{
		printf("平年\n");
	}
	return 0;
}