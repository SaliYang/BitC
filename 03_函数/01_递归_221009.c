#define _CRT_SECURE_NO_WARNINGS 1
//��ϰ������һ���޷�������ֵ����˳���ӡÿһλ

#include <stdio.h>
//���ݹ��ݹ�̫��ᵼ��StackOverFlow
//http://stackoverflow.comȫ�����Ա��֪��
void print(unsigned int num)
{
	if (num > 9)//����Ҫ�еݹ���������
	{
		print(num / 10);//ÿ�εݹ���ø��ӽ���������
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