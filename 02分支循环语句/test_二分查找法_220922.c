#define _CRT_SECURE_NO_WARNINGS 1
//������{12345678910}���ҳ�7

#include <stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 11;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;

		if (arr[mid] < k)
		{
			left = mid + 1;
		}

		else if (arr[mid] > k)
		{
			right = mid - 1;
		}

		else
		{
			printf("���ҵ�Ŀ��%d\n", arr[mid]);
			break;//ѭ��һ��Ҫ���������ʽ
		}
	}

	if (left > right)//��ʹ�ж�����Ϊ��Ȼֵ����д�������������Ķ�����һ����ϰ��
	{
		printf("û��Ŀ������");
	}

	return 0;
}