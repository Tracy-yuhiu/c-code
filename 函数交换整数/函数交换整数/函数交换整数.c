#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
void exch(int* a, int* b)//��������a��b�ĵ�ַ
{
	*a = *a ^ *b;//�����ã�ͨ����򽻻�����ֵ
	*b = *b ^ *a;
	*a = *a ^ *b;
}
int main()
{
	int a = 0;
	int b = 0;
	printf("������������\n");
	scanf("%d%d", &a, &b);
	exch(&a, &b);
	printf("�������Ϊ��%d   %d", a, b);
	return 0;
}