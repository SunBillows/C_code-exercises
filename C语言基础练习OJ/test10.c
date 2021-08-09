/*
描述
将一个四位数，反向输出。

输入描述：
一行，输入一个整数n（1000 <= n <= 9999）。

输出描述：
针对每组输入，反向输出对应四位数。
*/

#include <stdio.h>

int main()
{
    int a,b,c,d;
    
    scanf("%1d%1d%1d%1d",&d,&c,&b,&a);
    printf("%d%d%d%d\n",a,b,c,d);
        
    return 0;
}

