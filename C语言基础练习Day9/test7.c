/*
描述
	输入数字N，然后输入N个数，计算这N个数的和。
输入描述：
	第一行输入一个整数N(0≤N≤50)，第二行输入用空格分隔的N个整数。
输出描述：
	输出为一行，为第二行输入的“N个整数之和”的计算结果。

示例1
输入：
5
1 2 3 4 5
输出：
15

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int i,sum = 0;
    
    scanf("%d",&n);
    int *ch = malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        scanf("%d",&ch[i]);
    
    for(i=0;i<n;i++)
        sum += ch[i];
    printf("%d\n",sum);
    
    return 0;
}

