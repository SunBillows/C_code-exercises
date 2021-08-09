/*
描述
输入3科成绩，然后把三科成绩输出，成绩为整数形式。

输入描述：
一行，3科成绩，用空格分隔，范围（0~100）。

输出描述：
一行，把3科成绩显示出来，输出格式详见输出样例。
*/

#include <stdio.h>

int main()
{
    int a,b,c;
    
    scanf("%d %d %d",&a,&b,&c);
    printf("score1=%d,score2=%d,score3=%d\n",a,b,c);
    return 0;
}

