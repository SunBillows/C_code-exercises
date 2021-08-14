/*
描述
	KiKi学习了循环，BoBo老师给他出了一系列打印图案的练习，该任务是打印用“*”组成的“空心”三角形图案。
输入描述：
	多组输入，一个整数（3~20），表示输出的行数，也表示组成三角形边的“*”的数量。
输出描述：
	针对每行输入，输出用“*”组成的“空心”三角形，每个“*”后面有一个空格。

示例1
输入：
4
输出：
*       
* *     
*   *   
* * * * 

示例2
输入：
5
输出：
*         
* *       
*   *     
*     *   
* * * * *

*/


#include <stdio.h>

int main()
{
    int n;
    
    while(scanf("%d",&n)!=EOF)
    {
        for(int i=1;i<=n;i++)
        {
            //打印上底和下底
            if(i==1||i==n)
            {
                for(int num=1;num<=i;num++)
                    printf("* ");
                printf("\n");
            }
            //打印其余部分
            else
            {
                printf("* ");
                for(int sum = 0;sum<i-2;sum++)
                    printf("  ");
                printf("* \n");
            }
        }
    }
    
    return 0;
}

