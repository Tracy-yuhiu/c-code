#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int leap(int year)
{
	if (year % 4 == 0 && year % 100 != 0)//��ͨ���꣺�ܱ�4�����Ҳ��ܱ�100����
	{
		return 1;
	}
	else if (year % 400 == 0)//�������꣺�ܱ�400����
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
	printf("������Ҫ�жϵ����\n");
	scanf("%d", &year);
	tep = leap(year);
	if (tep == 1)
	{
		printf("����\n");
	}
	else
	{
		printf("ƽ��\n");
	}
	return 0;
}