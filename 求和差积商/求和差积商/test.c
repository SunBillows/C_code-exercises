#define _CRT_SECURE_NO_WARNINGS

//����2����������Ͳ����

#include <stdio.h>

int main()
{
	int a, b;

	printf("��������������:");
	scanf("%d %d", &a, &b);
	printf("��Ϊ:%d,��Ϊ:%d,��Ϊ:%d,��Ϊ:%d", a + b, a - b, a * b, a / b);

	return 0;
}