#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
struct stu
{
	char class[10];
	int age;
	double score;
};

int main()
{
	struct stu Tom = { "class one",20,58.9 };
	printf("1:%s %d %lf\n", Tom.class, Tom.age, Tom.score);//打印结构体时前方类型与后方数据需对应
	struct stu* pTom = &Tom;//结构体也可以通过指针变量取地址后进行操作
	printf("2:%s %d %lf\n", (*pTom).class, (*pTom).age, (*pTom).score);
	printf("3:%s %d %lf\n", pTom->class, pTom->age, pTom->score);
	return 0;
}