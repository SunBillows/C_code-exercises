/*
描述
	输入n个成绩，换行输出n个成绩中最高分数和最低分数的差。
输入描述：
	两行，第一行为n，表示n个成绩，不会大于10000。
	第二行为n个成绩（整数表示，范围0~100），以空格隔开。
输出描述：
	一行，输出n个成绩中最高分数和最低分数的差。

示例1
输入：
10
98 100 99 97 95 99 98 97 96 100
输出：
5

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int n;
    int max = 0;
    
    scanf("%d",&n);
    int *ch = malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        scanf("%d",&ch[i]);
    int min = ch[0];
    for(i=0;i<n;i++)
    {
        if(ch[i]>max)
            max = ch[i];
        else if(ch[i]<min)
            min = ch[i];
    }
    printf("%d\n",max - min);
    
    return 0;
}

