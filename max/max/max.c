#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int max = 0;
//	printf("please add in two numbers\n");
//	scanf("%d%d", &a, &b);
//	if (a > b)
//		max = a;
//	else
//		max = b;
//	printf("the max is %d", max);
//	return 0;
//}
int max(int a,int b)
{
	if (a > b)
		return a;
	else
		return b;
}
int main()
{
	int a = 0;
	int b = 0;
	printf("please add in two numbers\n");
	scanf("%d%d", &a, &b);
	printf("the max is %d", max(a, b));
	return 0;
}
