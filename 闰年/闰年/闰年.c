#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	int i = 0;
	int b = 0;
	int c = 0;
	for (a = 1000; a < 2001; a++)
	{
		if (a % 4 == 0 && a % 100 != 0)
		{
			printf("%d ", a);
			i++;
		}
		if (a % 400 == 0)
		{
			printf("%d", a);
			b++;
		}
	}
	c = i + b;
	printf("¹²%d¸ö", c);
	return 0;
}