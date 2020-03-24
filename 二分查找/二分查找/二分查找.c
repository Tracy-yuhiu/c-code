#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int midsearch(int i, int a, int* arr)
{
	int first = 0;
	int mid = 0;
	int last = i - 1;
	while (first <= last)
	{
		mid = (first + last) / 2;
		if (arr[mid] > a)
		{
			last = mid - 1;
		}
		else if (arr[mid] < a)
		{
			first = mid + 1;
		}
		else
		{
			printf("找到了，该数字下标为%d", mid);
			return 1;
		}
	}
	return 0;
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	printf("请输入要找的数字\n");
	scanf("%d", &a);
	b = sizeof(arr) / sizeof(arr[0]);
	while (1)
	{
		d = midsearch(b, a, arr);
		if (d == 1)
		{
			break;
		}
		else
		{
			printf("没找到\n");
			break;
		}
	}
	return 0;
}