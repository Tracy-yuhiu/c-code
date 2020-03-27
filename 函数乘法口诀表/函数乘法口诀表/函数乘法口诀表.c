#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void mul(int a)
{
	int tep = 0;
	int tep2 = 0;
	for (tep = 1; tep <= a; tep++)
	{
		for (tep2 = 1; tep2 <= tep; tep2++)
		{
			printf("%2d * %2d = %2d\t", tep, tep2, tep * tep);
		}
		printf("\n");
	}
}
int main()
{
	int par = 0;
	printf("ÇëÊäÈë¼ÆËã·¶Î§\n");
	scanf("%d", &par);
	mul(par);
	return 0;
}