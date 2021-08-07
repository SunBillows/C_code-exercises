#define _CRT_SECURE_NO_WARNINGS

//定义包含学号、姓名和成绩的学生信息结构类型，完成以下功能：
//（1）键盘输入n个学生信息数据（n从键盘输入）；
//（2）使用“冒泡法”对学生成绩由高到低排序；使用qsort函数
//（3）输出排序后学生信息。


#include <stdio.h>

//结构体 - 学号，姓名，分数
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