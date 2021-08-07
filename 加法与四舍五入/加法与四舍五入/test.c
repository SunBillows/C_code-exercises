#define _CRT_SECURE_NO_WARNINGS

//编写程序，用户输入任意的3个小数；将这3个小数相加并显示结果；将结果按四舍五入方法转换成整数并显示。

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

	printf("请输入三个小数：");
	scanf("%lf %lf %lf", &a, &b, &c);
	ret = int_num(a, b, c);
	printf("结果为:%.2lf\n", a + b + c);
	printf("四舍五入后的结果为:%d\n", ret);

	return 0;
}