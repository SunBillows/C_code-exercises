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
    int a=0,b=0,c=0,d=0;
    int num;
    scanf("%d",&num);
    a = num/1000;
    b = num/100%10;
    c = num/10%10;
    d = num%10;
    
    printf("%d%d%d%d\n",d,c,b,a);
    //scanf("%1d%1d%1d%1d",&d,&c,&b,&a);
    //printf("%d%d%d%d\n",a,b,c,d);
        
    return 0;
}

