//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>
//
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("&arr[%d] = %p\n", i, &arr[i]);//%p以Hex打印地址
//	}
//	return 0;
//}
//
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int i = 0;
//	int* p = arr;//数组名是数组首元素的地址
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *p);
//		p++;//++跳过int*的单位长度
//	}
//	
//	return 0;
//}