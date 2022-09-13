#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

extern int add(int x, int y);
int sum_input = 0;
int main()
{
	while (sum_input != 10)
	{
		printf("请输入2位数\n");
		int num1 = 0;
		int num2 = 0;
		scanf("%d%d", &num1, &num2);
		int sum_input = add(num1, num2);
		printf("sum_input=%d\n", sum_input);
			if (sum_input == 10)
			{
				printf("回答正确\n");
				break;
			}
	}

	return 0;
}