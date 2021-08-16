/*
描述
	已知一个函数y=f(x)，当x < 0时，y = 1；当x = 0时，y = 0；当x > 0时，y = -1。   
输入描述：
	一行，输入一个整数x。（-10000<x<10000）
输出描述：
	一行，输出y的值。

示例1
输入：
10
输出：
-1

示例2
输入：
-10
输出：
1

*/


#include <stdio.h>

int main()
{
    int n;
    
    scanf("%d",&n);
    if(n<0)
        printf("1\n");
    else if(n==0)
        printf("0\n");
    else
        printf("-1\n");
    
    re

