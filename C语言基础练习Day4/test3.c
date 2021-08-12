/*
描述
KiKi想知道他的考试成绩是否完美，请帮他判断。从键盘输入一个整数表示的成绩，编程判断成绩是否在90~100之间，如果是则输出“Perfect”。

输入描述：
多组输入，每行输入包括一个整数表示的成绩（90~100）。

输出描述：
针对每行输入，输出“Perfect”。

示例1
输入：
98
输出：
Perfect
*/

#include <stdio.h>

int main()
{
    int n;
    
    while((scanf("%d",&n))!=EOF)
    {
        getchar();
        if(n>=90&&n<=100)
            printf("Perfect\n");
    }
    
    return 0;
}


