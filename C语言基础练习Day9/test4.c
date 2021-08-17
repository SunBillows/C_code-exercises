/*
描述
	有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中，保证插入新数后，序列仍然是升序。
输入描述：
	第一行输入一个整数N(0≤N≤50)。
	第二行输入N个升序排列的整数，输入用空格分隔的N个整数。
	第三行输入想要进行插入的一个整数。
输出描述：
	输出为一行，N+1个有序排列的整数。

示例1
输入：
5
1 6 9 22 30
8
输出：
1 6 8 9 22 30

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,k;
    
    scanf("%d",&n);
    int *ch = malloc(sizeof(int)*(n+1));
    for(i=0;i<n;i++)
        scanf("%d",&ch[i]);
    scanf("%d",&k);
    
    for(i=n;i>=0;i--)
    {
        if(k<ch[i-1])
            ch[i] = ch[i-1];
        else
        {
            ch[i] = k;
            break;
        }
    }
    if(i == 0)
        ch[i] = k;
    
    for(i=0;i<=n;i++)
        printf("%d ",ch[i]);
    printf("\n");
    
    return 0;
}

