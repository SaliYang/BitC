#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
	int num = 1;
		while (100 >= num)//����д��������߿��Է���
		{
			if (num % 2 == 1)
			printf("%d ", num);
			num++;
		}
	return 0;
}
