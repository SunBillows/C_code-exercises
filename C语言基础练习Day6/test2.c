/*
描述
KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的翻转金字塔图案。
输入描述：
多组输入，一个整数（2~20），表示翻转金字塔边的长度，即“*”的数量，也表示输出行数。
输出描述：
针对每行输入，输出用“*”组成的金字塔，每个“*”后面有一个空格。

示例1
输入：
5
输出：
* * * * * 
 * * * * 
  * * * 
   * * 
    * 

示例2
输入：
6
输出：
* * * * * * 
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
        for(int i = n;i>0;i--)
        {
            for(int k=n;k>i;k--)
                printf(" ");
            for(int y=0;y<i;y++)
                printf("* ");
            printf("\n");
        }
    }
    
    return 0;
}

