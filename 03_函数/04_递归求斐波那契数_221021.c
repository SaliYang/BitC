//#define _CRT_SECURE_NO_WARNINGS 1
////递归求第n个斐波那契数
// //递归层数过多容易导致重复计算增加，增大计算量，根据情况灵活选用循环和递归
//#include <stdio.h>
//
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		return Fib(n - 1) + Fib(n - 2);
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