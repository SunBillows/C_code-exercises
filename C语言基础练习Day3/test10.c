/*
描述
BoBo买了一箱酸奶，里面有n盒未打开的酸奶，KiKi喜欢喝酸奶，第一时间发现了酸奶。KiKi每h分钟能喝光一盒酸奶，并且KiKi在喝光一盒酸奶之前不会喝另一个，那么经过m分钟后还有多少盒未打开的酸奶？

输入描述：
多组输入，每组输入仅一行，包括n，h和m（均为整数）。输入数据保证m <= n * h。

输出描述：
针对每组输入，输出也仅一行，剩下的未打开的酸奶盒数。
*/

#include <stdio.h>

int main()
{
    int n,h,m;
    
    while(scanf("%d %d %d",&n,&h,&m)!=EOF)
    {
        getchar();
        if(m%h == 0)
            printf("%d",n-(m/h));
        else if(m%h!=0)
            printf("%d",n-(m/h)-1);
    }
    
    return 0;
}

