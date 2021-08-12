/*
描述
KiKi参加了语文、数学、外语的考试，请帮他判断三科中的最高分。从键盘任意输入三个整数表示的分数，编程判断其中的最高分。

输入描述：
多组输入，每行输入包括三个整数表示的分数（0~100），用空格分隔。

输出描述：
针对每行输入，输出为一行，即三个分数中的最高分。

示例1
输入：
94 98 99
100 88 60
输出：
99
100
*/


#include <stdio.h>

int main()
{
    int a,count = 0;
    int max;
    
    while(scanf("%d ",&a)!= EOF)
    {
        count++;
        if(a>max)
            max = a;
        if(count%3==0)
        {
            printf("%d\n",max);
            max = 0;
        }
    }
    
    return 0;
}


