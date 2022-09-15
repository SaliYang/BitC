#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int num = 1;
		while (100 >= num)//常量写到变量左边可以防错
		{
			if (num % 2 == 1)
			printf("%d ", num);
			num++;
		}
	return 0;
}
