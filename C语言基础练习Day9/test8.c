/*
描述
	输入10个整数，分别统计输出正数、负数的个数。
输入描述：
	输入10个整数（范围-231~231-1），用空格分隔。
输出描述：
	两行，第一行正数个数，第二行负数个数，具体格式见样例。

示例1
输入：
-1 2 3 -6 7 8 -1 6 8 10
输出：
positive:7
negative:3

*/

#include <stdio.h>

int main()
{
    int i;
    int ch[10];
    int positive=0,negative=0;
    
    for(i=0;i<10;i++)
        scanf("%d",&ch[i]);
    for(i=0;i<10;i++)
    {
        if(ch[i]>0)
            positive++;
        else if(ch[i]<0)
            negative++;
    }
    printf("positive:%d\n",positive);
    printf("negative:%d\n",negative);
    
    return 0;
}

