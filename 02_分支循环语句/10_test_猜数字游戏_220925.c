//#define _CRT_SECURE_NO_WARNINGS 1
////猜数字游戏需求梳理：
////1、自动产生一个随机1-100之间的随机数字；
////2、猜随机数字是什么？
////	a、猜对了，"恭喜猜对了，游戏结束"；
////	b、猜错了，告诉猜大了还是猜小了，直到才对；
////3、游戏可以一直玩，除非退出游戏；
//
//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//
//void menu()
//{
//	printf ("********************\n");
//	printf ("*****  1.play  *****\n");
//	printf ("*****  0.exit  *****\n");
//	printf ("********************\n");
//}
//
//void game()
//{
//	int ret = rand()%100+1;
//	int guess = 0;
//
//	while (1)
//	{
//		printf ("猜数字>:");
//		scanf ("%d", &guess);
//		
//		if (guess < ret)
//		{
//			printf ("猜小了\n");
//		}
//
//		else if (guess > ret)
//		{
//			printf ("猜大了\n");
//		}
//		else
//		{
//			printf ("猜对了\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//srand放进循环后两个随机数间隔很小很规律
//
//	do
//	{
//		menu();
//
//		printf ("请选择：\n");
//		scanf ("%d", &input);
//
//		switch (input)
//		{
//			case 1:
//				game();
//				break;
//			case 0:
//				printf ("GameOver\n");
//				break;
//			default:
//				printf ("选择错误，重新选择\n");
//				break;
//		}
//	}while (input);
//
//	return 0;
//}