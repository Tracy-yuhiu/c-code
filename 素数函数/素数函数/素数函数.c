#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int prime(int num)
{
	int tep = 0;
	for (tep = 2; tep <= num; tep++)//����2-num����
	{
		if (num % tep == 0)//��numģtep�����Ϊ0��˵���������������壬breakֹͣѭ��
		{
			break;
		}
	}
	if (tep == num)//���tep��num�����˵��ֻ��1�����������������������������
	{
		printf("%d\t", num);
	}
	return 0;
}
int main()
{
	int num = 0;
	for (num = 100; num <= 200; num++)
	{
		prime(num);
	}
	return 0;
}