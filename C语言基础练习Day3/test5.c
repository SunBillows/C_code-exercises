/*
描述
从键盘任意输入一个字符，编程判断是否是字母（包括大小写）。

输入描述：
多组输入，每行输入包括一个字符。

输出描述：
针对每行输入，输出该字符是字母（YES）或不是（NO）。
*/

#include <stdio.h>

int main()
{
    char ch;
    while((scanf("%c",&ch))!=EOF)
    {
        getchar();
        if(ch>=65&&ch<=90||ch>=97&&ch<=122)
            printf("YES\n");
        else
            printf("NO\n");
    }
    
    return 0;
}

