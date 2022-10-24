//#define _CRT_SECURE_NO_WARNINGS 1
////练习：循环求第n个斐波那契数
////递归层数过多容易导致重复计算增加，增大计算量，根据情况灵活选用循环和递归
//
//#include <stdio.h>
//
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;//合理利用初始化，减少代码量
//
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;	
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//
//	int ret = Fib(n);
//	printf("%d", ret);
//
//	return 0;
//}