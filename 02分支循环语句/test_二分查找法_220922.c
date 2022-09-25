#define _CRT_SECURE_NO_WARNINGS 1
//在数组{12345678910}中找出7

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
			printf("已找到目标%d\n", arr[mid]);
			break;//循环一定要定义结束方式
		}
	}

	if (left > right)//即使判断条件为必然值，但写出条件有利于阅读，是一个好习惯
	{
		printf("没有目标数字");
	}

	return 0;
}