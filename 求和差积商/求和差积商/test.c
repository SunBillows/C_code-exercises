#define _CRT_SECURE_NO_WARNINGS

//输入2个整数，求和差积商

#include <stdio.h>

int main()
{
	int a, b;

	printf("请输入两个整数:");
	scanf("%d %d", &a, &b);
	printf("和为:%d,差为:%d,积为:%d,商为:%d", a + b, a - b, a * b, a / b);

	return 0;
}