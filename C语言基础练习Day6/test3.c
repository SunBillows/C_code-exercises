/*
描述
KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的菱形图案。
输入描述：
多组输入，一个整数（2~20）。
输出描述：
针对每行输入，输出用“*”组成的菱形，每个“*”后面有一个空格。

示例1
输入：
2
输出：
  * 
 * * 
* * * 
 * * 
  * 

示例2
输入：
3
输出：
   * 
  * * 
 * * * 
* * * * 
 * * * 
  * * 
   * 

示例3
输入：
4
输出：
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
 * * * * 
  * * * 
   * * 
    * 

*/


#include <stdio.h>

int main()
{
    int n;
    
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=1;i<=n;i++)
        {
            for(int k=0;k<n+1-i;k++)
            {
                printf(" ");
            }
            for(int y=0;y<i;y++)
                printf("* ");
            printf("\n");
        }
        for(int z = 0;z<n+1;z++)
        {
            printf("* ");
        }
        printf("\n");
        for(int i = n;i>0;i--)
        {
            for(int k=n;k>i-1;k--)
                printf(" ");
            for(int y=0;y<i;y++)
                printf("* ");
            printf("\n");
        }
    }
    
    return 0;
}

