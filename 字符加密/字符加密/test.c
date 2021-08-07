#define _CRT_SECURE_NO_WARNINGS

//字符加密题：编写程序将4个字符构成的字符串用替换加密法编码为密文，
//其中加密规则是：将原来的字母用字母表中其后的第3个字母替换。注意，最后3个字符用前3个替换，如x用a替换。
#include <stdio.h>

void change(char* a);

int main()
{
	char a, b, c, d;

	printf("请输入要加密的字符:");
	scanf("%c%c%c%c", &a, &b, &c, &d);

	change(&a);
	change(&b);
	change(&c);
	change(&d);

	return 0;
}

void change(char* a)
{
	if (*a >= 65 && *a <= 87 || *a >= 97 && *a <= 119)
		printf("%c", *a + 3);
	if (*a >= 88 && *a <= 90 || *a >= 120 && *a <= 122)
		printf("%c", *a - 23);
}