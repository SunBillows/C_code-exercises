/*
描述
依次输入一个学生的学号，以及3科（C语言，数学，英语）成绩，在屏幕上输出该学生的学号，3科成绩。

输入描述：
学号以及3科成绩，学号和成绩之间用英文分号隔开，成绩之间用英文逗号隔开。

输出描述：
学号，3科成绩，输出格式详见输出样例。
*/

#include <stdio.h>

int main()
{
    int num;
    float a,b,c;
    
    scanf("%d;%f,%f,%f",&num,&a,&b,&c);
    printf("The each subject score of  No. %d is %.2f, %.2f, %.2f.\n",num,a,b,c);
    
    return 0;
}

