#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int divi(int a,int b)
{
	int i = 0;
	while (b != 0)
	{
		i = a % b;
		a = b;
		b = i;
	}
	return a;
	/*while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a;*/
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	printf("��������������\n");
	scanf("%d%d", &a, &b);
	c = divi(a, b);
	printf("���Լ��Ϊ��%d", c);
	return 0;
}