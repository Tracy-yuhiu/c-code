#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//void test()
//{
//	static int a = 0;
//	a++;
//	printf("%d\n", a);
//}
//int main()
//{
//
//	return 0;
//}
//int main()
//{
//	/*int a = 10;
//	printf("%d\n", a);
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", *p);*/
//	/*printf("%d\n", sizeof(char*));
//	printf("%d\n", sizeof(double*));
//	printf("%d\n", sizeof(int*));*/
//
//	return 0;
//}
//struct Book//创建书的类型
//{
//	char name[30];
//	double price;
//	char id[30];
//};
//int main()
//{
//	struct Book b1 = { "c语言程序设计",56.25,"is212315" };
//	printf("%s\n", b1.name);
//	printf("%lf\n", b1.price);
//	printf("%s\n", b1.id);
//
//}
//int main()
//{
//	int age = 10;
//	if (age < 18)
//	{
//		printf("未成年");
//	}
//}
int main()
{
	int a = 0;
	for (a = 1; a<100; a++)
	{
		if (a % 2 == 1)
			printf("%d ", a);
	}
	return 0;
}