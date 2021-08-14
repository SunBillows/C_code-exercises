/*
描述
	KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的箭形图案。
输入描述：
	多组输入，一个整数（2~20）。
输出描述：
	针对每行输入，输出用“*”组成的箭形。

示例1
输入：
2
输出：
    *
  **
***
  **
    *

示例2
输入：
3
输出：
      *
    **
  ***
****
  ***
    **
      *

示例3
输入：
4
输出：
        *
      **
    ***
  ****
*****
  ****
    ***
      **
        *

*/


#include <stdio.h>

int main()
{
    int n;
    
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=0;i<n;i++)
        {
            for(int k=0;k<n-i;k++)
                printf("  ");
            for(int j=0;j<i+1;j++)
                printf("*");
            printf("\n");
        }
        for(int num=0;num<n+1;num++)
            printf("*");
        printf("\n");
        for(int x=0;x<n;x++)
        {
            for(int y=0;y<x+1;y++)
                printf("  ");
            for(int z=0;z<n-x;z++)
                printf("*");
            printf("\n");
        }
    }
    
    return 0;
}

