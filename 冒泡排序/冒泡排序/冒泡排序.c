#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int arr[5] = { 5,4,3,2,1 };
	int sz = 0;
	int tep = 0;
	int tem = 0;
	int count = 0;
	sz = sizeof(arr) / sizeof(arr[0]);//���������С
	for (tep = 0; tep < sz-1; tep++)//����ð����������
	{
		for (tem = 0; tem < sz - 1 - tep; tem++)//����һ�˽��еıȽϴ���
		{
			if (arr[tem] < arr[tem + 1])
			{
				arr[tem] = arr[tem] ^ arr[tem + 1];//���ð�λ��򽻻�����ֵ
				arr[tem + 1] = arr[tem + 1] ^ arr[tem];
				arr[tem] = arr[tem] ^ arr[tem + 1];
				count = 1;//����һ�����ƣ����������������ֵΪ1�����һ���ɶ�û�н��н��� ��countֵ��ȻΪ0
			}
		}
		if (count == 0)//���countΪ0���˵���Ѿ�����breakֹͣѭ������
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