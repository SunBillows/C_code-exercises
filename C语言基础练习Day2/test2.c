/*
描述
实现字母的大小写转换。多组输入输出。

输入描述：
多组输入，每一行输入大写字母。

输出描述：
针对每组输入输出对应的小写字母。
*/

#include <stdio.h>

int main()
{
    char c;
    
    while(scanf("%c",&c)!=EOF)
    {
        getchar();
        printf("%c\n",c+32);
    }
    
    return 0;
}

