/*

描述
BoBo教KiKi字符常量或字符变量表示的字符在内存中以ASCII码形
式存储。BoBo出了一个问题给KiKi，输入一个字符，输出该字�
�相应的ASCII码。

输入描述：
一行，一个字符。

输出描述：
一行，输出输入字符对应的ASCII码。

*/

#include <stdio.h>

int main()
{
    char c;
    
    scanf("%c",&c);
    printf("%d\n",c);
    
    return 0;
}