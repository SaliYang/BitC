//#define _CRT_SECURE_NO_WARNINGS 1
////��ӡ100-200֮�������������
//
//#include <stdio.h>
//#include <math.h>
//
//int main()
//{
//	int num = 0;
//	int i = 0;
//	int j = 0;
//
//	for (i = 101; i < 200; i += 2)//��СĿ�귶Χ
//	{
//		int flag = 1;
//				
//		for (j = 2; j <= sqrt(i); j++)//����һ�������������ӣ���������һ����������Ŀ�ƽ�������ٴμ����������
//		{
//			if (i % j == 0)
//			{
//				flag = 0;
//				break;
//			}
//		}
//
//		if (flag == 1)
//		{
//			num++;
//			printf ("%d ", i);
//		}
//	}
//
//	printf ("\n����һ����%d��\n",num);
//
//	return 0;
//}