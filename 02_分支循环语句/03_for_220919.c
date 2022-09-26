//#define _CRT_SECURE_NO_WARNINGS 1
//#include <stdio.h>;
//
//int main()
//{
//	int i = 0; int j = 0;
//	//(;;)为for循环语句语法，判断条件省略则为非0==真
//	for (i = 0, j = 0; i >= 0 && i < 10, j >= 0 && j < 10; i++, j++)//建议采用左闭右开写法可直观看出循环次数
//	{
//		if (5 == i, 5 == j)//常量写在左侧可防错
//		{
//			continue;//for循环语句中continue依然跳过后方代码回到循环语句开头，但for不会像while一样形成死循环
//		}
//
//		printf("i=%d,j=%d\n", i, j);
//
//	}
//
//	return 0;
//}