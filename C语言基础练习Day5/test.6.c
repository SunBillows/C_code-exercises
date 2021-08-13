/*
描述
KiKi实现一个简单计算器，实现两个数的“加减乘除”运算，用户从键盘输入算式“操作数1运算符操作数2”，计算并输出表达式的值，如果输入的运算符号不包括在（+、-、*、/）范围内，输出“Invalid operation!”。当运算符为除法运算，即“/”时。如果操作数2等于0.0，则输出“Wrong!Division by zero!”

输入描述：
多组输入，一行，操作数1运算符操作数2（其中运算符号包括四种：+、-、*、/）。

输出描述：
针对每组输入，输出为一行。
如果操作数和运算符号均合法，则输出一个表达式，操作数1运算符操作数2=运算结果，各数小数点后均保留4位，数和符号之间没有空格。
如果输入的运算符号不包括在（+、-、*、/）范围内，输出“Invalid operation!”。当运算符为除法运算，即“/”时。
如果操作数2等于0.0，则输出“Wrong!Division by zero!”。

示例1
输入：
1.0+3.0 
1.0;4.0
44.0/0.0
输出：
1.0000+3.0000=4.0000
Invalid operation!
Wrong!Division by zero!

*/

#include <stdio.h>

int main()
{
    double a,b;
    char ch;
    
    while(scanf("%lf%c%lf",&a,&ch,&b)!=EOF)
    {
        if(ch!='*'&ch!='/'&&ch!='+'&&ch!='-')
            printf("Invalid operation!\n");
        else
        {
            if(ch=='/')
            {
                if(b == 0)
                    printf("Wrong!Division by zero!\n");
                else
                    printf("%.4lf/%.4lf=%.4lf",a,b,a/b);
            }
            else if(ch=='+')
                printf("%.4lf+%.4lf=%.4lf",a,b,a+b);
            else if(ch=='-')
                printf("%.4lf-%.4lf=%.4lf",a,b,a-b);
            else if(ch=='*')
                printf("%.4lf*%.4lf=%.4lf",a,b,a*b);
        }
    }
    
    return 0;
}

