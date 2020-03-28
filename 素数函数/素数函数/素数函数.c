#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <math.h>
int prime(int num)
{
	int tep = 0;
	for (tep = 2; tep <= num; tep++)//产生2-num的数
	{
		if (num % tep == 0)//用num模tep，如果为0则说明不符合素数定义，break停止循环
		{
			break;
		}
	}
	if (tep == num)//如果tep与num相等则说明只有1和它本身不再有其他因数，输出即可
	{
		printf("%d\t", num);
	}
	return 0;
}
int main()
{
	int num = 0;
	for (num = 100; num <= 200; num++)
	{
		prime(num);
	}
	return 0;
}