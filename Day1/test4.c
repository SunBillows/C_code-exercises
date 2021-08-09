/*
描述
输入一个字符，用它构造一个三角形金字塔。

输入描述：
输入只有一行，一个字符。

输出描述：
该字符构成的三角形金字塔。
*/

#include <stdio.h>

int main()
{
	char a;

	scanf("%c", &a);

	printf("%5c\n", a);
	printf("%4c%2c\n", a, a);
	printf("%3c%2c%2c\n", a, a, a);
	printf("%2c%2c%2c%2c\n", a, a, a, a);
	printf("%c%2c%2c%2c%2c\n", a, a, a, a, a);
	return 0;
}
