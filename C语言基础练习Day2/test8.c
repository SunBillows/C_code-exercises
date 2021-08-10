/*
描述
问题：一年约有3.156×107s，要求输入您的年龄，显示该年龄合多少秒。

输入描述：
一行，包括一个整数age(0<age<=200)。

输出描述：
一行，包含一个整数，输出年龄对应的秒数。
*/

#include <stdio.h>

int main()
{
    long age,seconds;
    
    scanf("%ld",&age);
    seconds = age * 31560000;
    printf("%ld",seconds);
    
    return 0;
}

