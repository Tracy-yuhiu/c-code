#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int func(int a)
//{
//	int n;
//	switch (a)
//	{
//	case 1:n = 30;
//	case 2:n = 20;
//	case 3:n = 16;
//	default:n = 0;
//	}
//	return n;
//}
//int main()
//{
//	int a = 1;
//	printf("%d", func(a));
//	return 0;
//}
int main()
{
	int x = 3;
	int y = 3;
	switch (x % 2)
	{
	case 1:
		switch (y)
		{
		case 0:
			printf("first");
		case 1:
			printf("secend");
			break;
		default:
			printf("hello");
		}
	case 2:
		printf("third");
	}
	return 0;
}