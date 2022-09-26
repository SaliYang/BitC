//#define _CRT_SECURE_NO_WARNINGS 1
////输入密码,最多3次，正确密码"123456"
//
//#include <stdio.h>
//#include<string.h>
//
//int main()
//{
//	int i = 0;
//	char password[10] = { 0 };
//
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码\n");
//		scanf("%s", password);
//
//		if (strcmp(password, "123456") == 0)//比较字符串使用strcmp,返回0表示相同
//		{
//			printf("登陆成功\n");
//			break;
//		}
//
//		else
//		{
//			printf("输入错误\n");
//		}
//	}
//
//	if (i == 3)
//	{
//		printf("登录失败");
//	}
//
//	return 0;
//}