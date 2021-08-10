/*
描述
不使用累计乘法的基础上，通过移位运算（<<）实现2的n次方的计算。

输入描述：
多组输入，每一行输入整数n（0 <= n < 31）。

输出描述：
针对每组输入输出对应的2的n次方的结果。
*/

#include <stdio.h>

int main()
{
    int n;
    
    while((scanf("%d",&n))!=EOF)
    {
        int end = 1;
        for(int i=0;i<n;i++)
        {
            end = end<<1;
        }    
        printf("%d\n",end);
    }
    
    return 0;
}

