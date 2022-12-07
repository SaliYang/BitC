//#define _CRT_SECURE_NO_WARNINGS 1
////将降序数组改为升序并打印
////数组名是首元素的地址，sizeof和&除外；
////"sizeof（数组）"的数组表示整个数组，计算的是整个数组的大小，单位字节；
////"&数组"的数组表示整个数组，取出的是整个数组的地址；
//
//#include <stdio.h>
//void bubble_sort (int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)
//		{
//			if (arr[j] > arr[j+1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//
//	bubble_sort (arr,sz);//数组传参传递的是首元素地址
//
//	return 0;
//}