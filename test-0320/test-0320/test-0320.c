#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
//int main()
//{
//	/*char input[20] = { 0 };
//	int ch = 0;
//	printf("����������\n");
//	scanf("%s", input);
//	while ((ch=getchar())!= '\n')
//	{
//		;
//	}
//	printf("��ȷ�ϣ���Y/N)");
//	ch = getchar();
//	if (ch == 'Y')
//	{
//		printf("ȷ�ϳɹ�");
//	}
//	else
//	{
//		printf("��ȷ��");
//
//	}*/
//	/*int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}*/
//	/*ch = getchar();
//	putchar(ch);*/
//	return 0;
//}
int main()
{
	int a = 0;
	int b = 0;
	int c = 1;
	printf("������\n");
	scanf("%d", &a);
	for (b = 1; b < a + 1; b++)
	{
		c = b * c;
	}
	printf("%d", c);
	return 0;
}