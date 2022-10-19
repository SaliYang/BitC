//#define _CRT_SECURE_NO_WARNINGS 1
////练习：不创建临时变量求字符串长度
//
//#include <stdio.h>
//
//int my_strlen(char *str)//char*传进去的是数组第一个地址
//{
//	if (*str != '\0')//*解应用
//	{
//		return 1 + my_strlen(str + 1);
//	}
//
//	else
//		return 0;
//}
//
//int main ()
//{
//	char arr[] = "12345";
//
//	printf ("%d\n", my_strlen(arr));
//
//	return 0;
//}