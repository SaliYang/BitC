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
	printf("1:%s %d %lf\n", Tom.class, Tom.age, Tom.score);//��ӡ�ṹ��ʱǰ����������������Ӧ
	struct stu* pTom = &Tom;//�ṹ��Ҳ����ͨ��ָ�����ȡ��ַ����в���
	printf("2:%s %d %lf\n", (*pTom).class, (*pTom).age, (*pTom).score);
	printf("3:%s %d %lf\n", pTom->class, pTom->age, pTom->score);
	return 0;
}