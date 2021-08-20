/*
描述
	小乐乐比较懒惰，他现在想睡觉，然后再去学习。他知道现在的时刻，以及自己要睡的时长，想设定一个闹钟叫他起床学习，
	但是他太笨了，不知道应该把闹钟设定在哪个时刻，请你帮助他。(只考虑时和分，不考虑日期)
输入描述：
	输入现在的时刻以及要睡的时长k（单位：minute），中间用空格分开。
	输入格式：hour:minute k(如hour或minute的值为1，输入为1，而不是01)
	(0 ≤ hour ≤ 23，0 ≤ minute ≤ 59，1 ≤ k ≤ 109)
输出描述：
	对于每组输入，输出闹钟应该设定的时刻，输出格式为标准时刻表示法（即时和分都是由两位表示，位数不够用前导0补齐）。

示例1
输入：
0:0 100
输出：
01:40

示例2
输入：
1:0 200
输出：
04:20
*/


#include <stdio.h>

int main()
{
    int h,m;
    long k;
    int hour,minutes;
    
    scanf("%d:%d %ld",&h,&m,&k);
    hour = h + k/60;
    minutes = m + (k - k/60*60);
    //当分钟相加大于60时，小时要加1，同时分钟清零
    if(minutes > 59)
    {
        hour = hour+1;
        minutes = minutes - 60;
    }
    //当小时数大于23时时，小时数要从0开始计算
    while(hour>23)
    {
        hour = hour - 24;
    }

    printf("%02d:%02d\n",hour,minutes);
    
    return 0;
}

