#define _CRT_SECURE_NO_WARNINGS

//�������ѧ�š������ͳɼ���ѧ����Ϣ�ṹ���ͣ�������¹��ܣ�
//��1����������n��ѧ����Ϣ���ݣ�n�Ӽ������룩��
//��2��ʹ�á�ð�ݷ�����ѧ���ɼ��ɸߵ�������ʹ��qsort����
//��3����������ѧ����Ϣ��


#include <stdio.h>

//�ṹ�� - ѧ�ţ�����������
typedef struct stu
{
	int num;
	char name[20];
	int fenshu;
}Stu;

int main()
{
	int i = 0;
	Stu student[100];

	scanf("%d", &i);
	for (int n = 0; n < i; n++)
	{
		scanf("%d %s %d", &student->num, &student->name, &student->fenshu);
	}


	return 0;
}