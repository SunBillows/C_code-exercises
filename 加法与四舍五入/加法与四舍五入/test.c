#define _CRT_SECURE_NO_WARNINGS

//��д�����û����������3��С��������3��С����Ӳ���ʾ�������������������뷽��ת������������ʾ��

#include <stdio.h>

int int_num(double x, double y, double z)
{
	double sum;
	int n;

	sum = x + y + z;
	n = sum + 0.5;
	return n;
}

int main()
{
	double a, b, c;
	int ret;

	printf("����������С����");
	scanf("%lf %lf %lf", &a, &b, &c);
	ret = int_num(a, b, c);
	printf("���Ϊ:%.2lf\n", a + b + c);
	printf("���������Ľ��Ϊ:%d\n", ret);

	return 0;
}