#define _CRT_SECURE_NO_WARNINGS

//�Ӽ�����������3��������Ȼ�������3����ƽ��ֵ�����ƽ��ֵʱ��ʹ�ø�ʽ�� ��%g��

#include <stdio.h>

double averge_num(int a, int b, int c)
{
	return (((double)a + (double)b + (double)c) / 3);
}

int main()
{
	int a, b, c;
	double ret;
	//�Ӽ���������������
	printf("��������������");
	scanf("%d %d %d", &a,&b,&c);
	ret = averge_num(a, b, c);
	printf("ƽ����Ϊ%g", ret);

	return 0;
}