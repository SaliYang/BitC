//#define _CRT_SECURE_NO_WARNINGS 1
////��������Ϸ��������
////1���Զ�����һ�����1-100֮���������֣�
////2�������������ʲô��
////	a���¶��ˣ�"��ϲ�¶��ˣ���Ϸ����"��
////	b���´��ˣ����߲´��˻��ǲ�С�ˣ�ֱ���Ŷԣ�
////3����Ϸ����һֱ�棬�����˳���Ϸ��
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
//		printf ("������>:");
//		scanf ("%d", &guess);
//		
//		if (guess < ret)
//		{
//			printf ("��С��\n");
//		}
//
//		else if (guess > ret)
//		{
//			printf ("�´���\n");
//		}
//		else
//		{
//			printf ("�¶���\n");
//			break;
//		}
//	}
//}
//
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));//srand�Ž�ѭ������������������С�ܹ���
//
//	do
//	{
//		menu();
//
//		printf ("��ѡ��\n");
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
//				printf ("ѡ���������ѡ��\n");
//				break;
//		}
//	}while (input);
//
//	return 0;
//}