#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	for (a = 1, b = 1; a <= 100; a++)
//	{
//		if (b >= 20)
//		{
//			break;
//		}
//		if (b % 3 == 1)
//		{
//			b = b + 3;
//			continue;
//		}
//		b = b - 5;
//	}
//	printf("%d\n", a);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int i = 0;
//	int tep = 0;
//	for (a = 1; a < 101; a++)
//	{
//		b = a / 10;
//		i = a % 10;
//		if (b == 9)
//			tep++;
//		if (i == 9)
//			tep++;
//	}
//	printf("共%d个9\n", tep);
//}
//#include <stdio.h>
//#include <math.h>
//int main()
//{
//	int a = 0;
//	double b = 0;
//	for (a = 1; a < 101; a++)
//	{
//		b = (1.0 / a) * (pow(-1, (a + 1)))+b;
//	}
//	printf("%f\n", b);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	double b = 0;
//	for (a = 1; a < 101; a++)
//	{
//		b = (1.0 / a) + b;
//		b = -b;
//	}
//	printf("%d\n", b);
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int arr[10] = { 0 };
//	printf("请输入10个数字\n");
//	for (a = 0; a < 10; a++)
//	{
//		scanf("%d", arr);
//	}
//	for (b = 0; b < 10; b++)
//	{
//		for (c = 0; c < 10 - b - 1; c++)
//		{
//			int n = 0;
//			if (arr[c] < arr[c + 1])
//			{
//				n = arr[c];
//				arr[c] = arr[c+1];
//				arr[c + 1] = n;
//			}
//		}
//	}
//	printf("the max is : %d\n", arr[0]);
//	return 0;
//}
#include <stdio.h>
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	for (a = 1; a < 10; a++)
	{
		for (b = 1; b <= a; b++)
		{
			c = a * b;
			printf("%d*%d=%d\t", a, b, c);
		}
		printf("\n");
	}
	return 0;
}