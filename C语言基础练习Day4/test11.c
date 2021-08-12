/*
KiKi最近学习了信号与系统课程，这门课里有一个非常有趣的函数，单位阶跃函数，其中一种定义方式为：
现在试求单位冲激函数在时域t上的值。

输入描述：
题目有多组输入数据，每一行输入一个t(-1000<t<1000)表示函数的时域t。

输出描述：
输出函数的值并换行。

示例1
输入：
11
0
-11
输出：
1
0.5
0
*/


#include <stdio.h>

int main()
{
    int t;
    
    while(scanf("%d",&t)!=EOF)
    {
        if(t == 0)
            printf("0.5\n");
        else if(t > 0)
            printf("1\n");
        else
            printf("0\n");
    }
    return 0;
}
