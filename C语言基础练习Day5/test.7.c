/*
描述
KiKi想获得某年某月有多少天，请帮他编程实现。输入年份和月份，计算这一年这个月有多少天。

输入描述：
多组输入，一行有两个整数，分别表示年份和月份，用空格分隔。

输出描述：
针对每组输入，输出为一行，一个整数，表示这一年这个月有多少天。

示例1
输入：
2008 2
输出：
29

*/

#include <stdio.h>

int main()
{
    int year,month;
    
    while(scanf("%d %d",&year,&month)!=EOF)
    {
        if(month == 1||month == 3||month == 5||month == 7||month == 8||month == 10||month == 12)
            printf("31\n");
        else if(month == 4||month == 6||month == 9||month == 11)
            printf("30\n");
        else if(month == 2)
        {
        //如果是闰年且月份为2月，则有29天
        if(year%4==0&&year%100!=0||year%400==0)
            printf("29\n");
        else if(month == 2)
            printf("28\n");
        }


    }
    
    return 0;
}

