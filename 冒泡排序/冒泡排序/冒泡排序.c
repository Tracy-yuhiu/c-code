#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[5] = { 5,4,3,2,1 };
	int sz = 0;
	int tep = 0;
	int tem = 0;
	int count = 0;
	sz = sizeof(arr) / sizeof(arr[0]);//计算数组大小
	for (tep = 0; tep < sz-1; tep++)//控制冒泡排序趟数
	{
		for (tem = 0; tem < sz - 1 - tep; tem++)//控制一趟进行的比较次数
		{
			if (arr[tem] < arr[tem + 1])
			{
				arr[tem] = arr[tem] ^ arr[tem + 1];//采用按位异或交换两个值
				arr[tem + 1] = arr[tem + 1] ^ arr[tem];
				arr[tem] = arr[tem] ^ arr[tem + 1];
				count = 1;//加入一个控制，如果进行了排序则赋值为1，如果一整躺都没有进行交换 则count值依然为0
			}
		}
		if (count == 0)//如果count为0则可说明已经有序，break停止循环即可
		{
			break;
		}
	}
	for (tep = 0; tep < sz; tep++)
	{
		printf("%d ", arr[tep]);
	}
	return 0;
}