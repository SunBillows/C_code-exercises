/*
描述
	输入NxM矩阵，矩阵元素均为整数，计算其中大于零的元素之和。
输入描述：
	第一行为N M(N: 矩阵行数；M: 矩阵列数,且M,N<=10)，接下来的N行为矩阵各行。
输出描述：
	一行，其中大于零的元素之和。

示例1
输入：
3 3
2 3 4
-5 -9 -7
0 8 -4
输出：
17
*/


#include <stdio.h>

int main()
{
    int n,m;
    int i,k;
    int sum = 0;
    int ch[11][11];
    
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(k=0;k<m;k++)
            scanf("%d",&ch[i][k]);
    }
    
    for(i=0;i<n;i++)
    {
        for(k=0;k<m;k++)
        {
            if(ch[i][k]>0)
                sum+=ch[i][k];
        }
    }
    printf("%d\n",sum);
    
    return 0;
}

