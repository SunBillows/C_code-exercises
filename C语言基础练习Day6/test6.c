/*
描述
	KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的反斜线形图案。
输入描述：
	多组输入，一个整数（2~20），表示输出的行数，也表示组成反斜线的“*”的数量。
输出描述：
	针对每行输入，输出用“*”组成的反斜线。

示例1
输入：
4
输出：
*   
 *  
  * 
   *

示例2
输入：
5
输出：
*    
 *   
  *  
   * 
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
            for(int k=0;k<i;k++)
                printf(" ");
            printf("*");
            for(int j=0;j<n-i-1;j++)
                printf(" ");
            printf("\n");
        }
    }
    
    return 0;
}

