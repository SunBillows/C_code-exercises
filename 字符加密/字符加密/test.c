#define _CRT_SECURE_NO_WARNINGS

//�ַ������⣺��д����4���ַ����ɵ��ַ������滻���ܷ�����Ϊ���ģ�
//���м��ܹ����ǣ���ԭ������ĸ����ĸ�������ĵ�3����ĸ�滻��ע�⣬���3���ַ���ǰ3���滻����x��a�滻��
#include <stdio.h>

void change(char* a);

int main()
{
	char a, b, c, d;

	printf("������Ҫ���ܵ��ַ�:");
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