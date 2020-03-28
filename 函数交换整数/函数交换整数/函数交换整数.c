#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void exch(int* a, int* b)//函数传入a与b的地址
{
	*a = *a ^ *b;//解引用，通过异或交换两个值
	*b = *b ^ *a;
	*a = *a ^ *b;
}
int main()
{
	int a = 0;
	int b = 0;
	printf("请输入两个数\n");
	scanf("%d%d", &a, &b);
	exch(&a, &b);
	printf("交换结果为：%d   %d", a, b);
	return 0;
}