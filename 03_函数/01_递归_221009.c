#define _CRT_SECURE_NO_WARNINGS 1
//练习：接收一个无符号整型值，按顺序打印每一位

#include <stdio.h>
//死递归或递归太深会导致StackOverFlow
//http://stackoverflow.com全球程序员的知乎
void print(unsigned int num)
{
	if (num > 9)//必须要有递归限制条件
	{
		print(num / 10);//每次递归调用更接近限制条件
	}

	printf("%d ", num % 10);
}

int main()
{
	unsigned int num = 0;

	scanf("%u", &num);
	
	print(num);

	return 0;
}