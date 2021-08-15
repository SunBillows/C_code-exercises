/*
描述
	公务员面试现场打分。有7位考官，从键盘输入若干组成绩，每组7个分数（百分制），去掉一个最高分和一个最低分，输出每组的平均成绩。
输入描述：
	一行，输入7个整数（0~100），代表7个成绩，用空格分隔。
输出描述：
	一行，输出去掉最高分和最低分的平均成绩，小数点后保留2位，每行输出后换行。

示例1
输入：
99 45 78 67 72 88 60
输出：
73.00
*/


#include <stdio.h>

int main()
{
    int ch[10];
    int min,max = 0;
    int sum = 0;
    
    //先输入7个整数成绩
    for(int i=0;i<7;i++)
    {
        scanf("%d",&ch[i]);
    }
    min = ch[0];
    //判断最高分与最低分
    for(int n=0;n<7;n++)
    {
        if(ch[n]>max)
            max = ch[n];
        else if(ch[n]<min)
            min = ch[n];
    }
    for(int k=0;k<7;k++)
    {
        sum += ch[k];
    }
    printf("%.2f\n",(sum - max - min)/5.f);
    
    
    return 0;
}

