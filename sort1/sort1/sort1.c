#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	printf("请输入三个数字\n");
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		a = a ^ b;
//		b = b ^ a;
//		a = a ^ b;
//	}
//	if (b < c)
//	{
//		b = b ^ c;
//		c = c ^ b;
//		b = b ^ c;
//	}
//	if (a < b)
//	{
//		a = a ^ b;
//		b = b ^ a;
//		a = a ^ b;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}
//int main()
//{
//	int arr[3] = { 0 };
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int i = 0;
//	printf("请输入三个数字\n");
//	for (i = 0; i < 3; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (a = 0; a < 3; a++)
//	{
//		for (b = 0; b < 3 - a - 1; b++)
//		{
//			int n = 0;
//			if (arr[b] < arr[b + 1])
//			{
//				n = arr[b];
//				arr[b] = arr[b + 1];
//				arr[b + 1] = n;
//			}
//		}
//	}
//	for (c = 0; c < 3; c++)
//	{
//		printf("%d ", arr[c]);
//	}
//	return 0;
//}
int *sort(int arr[])
{
	int a = 0;
	int b = 0;
	for (a = 0; a < 3; a++)
	{
		for (b = 0; b < 3 - a - 1; b++)
		{
			if (arr[b] < arr[b + 1])
			{
				int n = 0;
				n = arr[b];
				arr[b] = arr[b + 1];
				arr[b + 1] = n;
			}
		}
	}
	return arr;
}
int main()
{
	int a = 0;
	int b = 0;
	int arr[3] = { 0 };
	printf("请输入三个整数\n");
	for (a = 0; a < 3; a++)
	{
		scanf("%d", &arr[a]);
	}
	sort(arr);
	printf("排序后为：");
	for (b = 0; b < 3; b++)
	{
		printf("%d ", arr[b]);
	}
	return 0;
}