/*
描述
	输入n个整数的序列，要求对这个序列进行去重操作。所谓去重，是指对这个序列中每个重复出现的整数，只保留该数第一次出现的位置，删除其余位置。
输入描述：
	输入包含两行，第一行包含一个正整数n（1 ≤ n ≤ 1000），表示第二行序列中数字的个数；第二行包含n个整数（范围1~5000），用空格分隔。
输出描述：
	输出为一行，按照输入的顺序输出去重之后的数字，用空格分隔。

示例1
输入：
5
10 12 93 12 75
输出：
10 12 93 75

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    
    scanf("%d",&n);
    int *ch = malloc(sizeof(int)*n);
    for(i = 0;i<n;i++)
        scanf("%d",&ch[i]);
    
    for(i = 0;i<n;i++)
    {
        for(int k = 0;k<i;k++)
        {
            if(ch[i] == ch[k])
                ch[i] = 0;
        }
    }
    for(i=0;i<n;i++)
    {
        if(ch[i] != 0)
            printf("%d ",ch[i]);
    }
    printf("\n");
    
    return 0;
}

