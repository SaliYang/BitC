//#define _CRT_SECURE_NO_WARNINGS 1
////打印100-200之间的素数和数量
//
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int num = 0;
//	int i = 0;
//	int j = 0;
//
//	for (i = 101; i < 200; i += 2)//缩小目标范围
//	{
//		int flag = 1;
//				
//		for (j = 2; j <= sqrt(i); j++)//“若一个数有两个因子，则至少有一个≤这个数的开平方”，再次减少运算次数
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//
//		if (flag == 1)
//		{
//			num++;
//			printf ("%d ", i);
//		}
//	}
//
//	printf ("\n素数一共有%d个\n",num);
//
//	return 0;
//}