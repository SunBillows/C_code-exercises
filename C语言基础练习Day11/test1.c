/*
描述
	小乐乐最近在课上学习了如何求两个正整数的最大公约数与最小公倍数，但是他竟然不会求两个正整数的最大公约数与最小公倍数之和，请你帮助他解决这个问题。
输入描述：
	每组输入包含两个正整数n和m。(1 ≤ n ≤ 109，1 ≤ m ≤ 109)
输出描述：
	对于每组输入，输出一个正整数，为n和m的最大公约数与最小公倍数之和。

示例1
输入：
10 20
输出：
30

示例2
输入：
15 20
输出：
65
*/


/*
分析:
	求最大公约数常用的有两种方法，一是九章算术中的更相减损术：大数减小数直到相等，相等的数即最大公约数，该算法时间复杂度约为O(N)；
	二是欧几里得的辗转相除法：大数除以小数取余数(相当于模运算)，直到余数为零时(也即模运算为零时)的除数(也即模数)就是最大公约数，该算法时间复杂度约为O(logN)。

	求最小公倍数的方法：原始数据的乘积除以最大公约数。
*/


#include<stdio.h>

int main()
{
    long long a,b,comax,comin,k;
    
    scanf("%lld %lld",&a,&b);
    
    k=a*b;
    while(a&&b)
    {
        if(a>b) 
            a %= b;
        else 
            b %= a;
    }
    
    comax=a>b?a:b;
    comin=k/comax;
    
    printf("%lld\n",comax+comin);
    
    return 0;
}

