/*
描述
	有一个有序数字序列，从小到大排序，将一个新输入的数插入到序列中，保证插入新数后，序列仍然是升序。
输入描述：
	第一行输入一个整数(0≤N≤50)。
	第二行输入N个升序排列的整数，输入用空格分隔的N个整数。
	第三行输入想要进行插入的一个整数。
输出描述：
	输出为一行，N+1个有序排列的整数。

示例1
输入：
5
1 6 9 22 30
8
输出：
1 6 8 9 22 30
*/

#include <stdio.h>

int main()
{
    int n,k;
    int x;
    int ch[100];
    
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&ch[i]);
    scanf("%d",&k);
    
    //遍历整个数组，找到数字k插入的地址
    for(x=n;ch[x-1]>k;x--)
    {
        //将k之后的数字向后移动
        ch[x] = ch[x-1];
    }
    ch[x] = k;
    
    for(int y =0;y<=n;y++)
        printf("%d ",ch[y]);
    printf("\n");
    
    return 0;
}

