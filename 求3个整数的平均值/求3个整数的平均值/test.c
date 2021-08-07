#define _CRT_SECURE_NO_WARNINGS

//从键盘输入任意3个整数，然后输出这3个的平均值，输出平均值时请使用格式符 “%g”

#include <stdio.h>

double averge_num(int a, int b, int c)
{
	return (((double)a + (double)b + (double)c) / 3);
}

int main()
{
	int a, b, c;
	double ret;
	//从键盘输入三个整数
	printf("请输入三个整数");
	scanf("%d %d %d", &a,&b,&c);
	ret = averge_num(a, b, c);
	printf("平均数为%g", ret);

	return 0;
}