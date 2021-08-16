/*
描述
	有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中，保证插入新数后，序列仍然是升序。
输入描述：
	共三行，
	第一行输入一个整数(0≤N≤50)。
	第二行输入N个升序排列的整数，输入用空格分隔的N个整数。
	第三行输入想要进行插入的一个整数。
输出描述：
	输出为一行，N+1个有序排列的整数。

示例1
输入：
7 
5 30 40 50 60 70 90
20
输出：
5 20 30 40 50 60 70 90
*/


#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,k;
    scanf("%d",&n);
    int *ch;
    ch = (int *)malloc((n+1)*sizeof(int));
    for(i=0;i<n;i++)
    {
        scanf("%d",&ch[i]);
    }
    scanf("%d",&k);
    for(i=n-1;ch[i]>k;i--)
    {
        ch[i+1] = ch[i];
    }
    ch[i+1] = k;
    
    for(i=0;i<=n;i++)
        printf("%d ",ch[i]);
    
    return 0;
}

