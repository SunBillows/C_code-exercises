/*
描述
给定一个浮点数，要求得到该浮点数的个位数。

输入描述：
一行，包括一个浮点数。

输出描述：
一行，包含一个整数，为输入浮点数对应的个位数。
*/

#include <stdio.h>

int main()
{
    float a;
    int b;
    
    scanf("%f",&a);
    b = (int)a%10;
    
    printf("%d",b);
        
    return 0;
}

