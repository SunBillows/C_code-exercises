/*
描述
	KiKi得到了一个n行m列的矩阵，现在他想知道第x行第y列的值是多少，请你帮助他完成这个任务。
输入描述：
	第一行包含两个数n和m，表示这个矩阵包含n行m列。从2到n+1行，每行输入m个整数（范围-231~231-1），用空格分隔，共输入n*m个数，表示矩阵中的元素。
	接下来一行输入x和y，用空格分隔，表示KiKi想得到的元素的位置。(1≤x≤n≤10，1≤y≤m≤10)
输出描述：
	一行，输出一个整数值，为KiKi想知道的值。

示例1
输入：
2 3
1 2 3
4 5 6
1 2 
输出：
2
*/


#include <stdio.h>

int main()
{
    int n,m;
    int x,y;
    int i,k;
    int ch[10][10];
    
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(k = 0;k<m;k++)
            scanf("%d",&ch[i][k]);
    }
    scanf("%d %d",&x,&y);
    
    printf("%d\n",ch[x-1][y-1]);
    
    return 0;
}

