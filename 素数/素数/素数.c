#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int i = 0;
	for (a = 100; a < 201; a++)
	{
		for (b = 2; b < a; b++)
		{
			if (a % b == 0)
			{
				break;
			}
		}
		if (b == a)
		{
			printf("%d\t", a);
			i++;
		}
	}
	printf("\n¹²%d¸ö", i);
	return 0;
}