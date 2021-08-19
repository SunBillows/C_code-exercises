/*
描述
	KiKi想知道一个n阶方矩是否为上三角矩阵，请帮他编程判定。上三角矩阵即主对角线以下的元素都为0的矩阵，主对角线为从矩阵的左上角至右下角的连线。
输入描述：
	第一行包含一个整数n，表示一个方阵包含n行n列，用空格分隔。 (1≤n≤10)
	从2到n+1行，每行输入n个整数（范围-231~231-1），用空格分隔，共输入n*n个数。
输出描述：
	一行，如果输入方阵是上三角矩阵输出"YES"并换行，否则输出"NO"并换行。

示例1
输入：
3
1 2 3
0 4 5
0 0 6
输出：
YES
*/


#include<stdio.h>

int main()
{
    int n,flag=1;
    scanf("%d",&n);
    int a[n][n];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
            if(i-j>0)
            {
                //当i-j>0时，a[i][j]为下三角的元素
                if(a[i][j]!=0)
                    flag=0;
            }
        }
    }
    if(flag)
        printf("YES");
    else printf("NO");
    return 0;
}

