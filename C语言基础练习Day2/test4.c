/*
描述
根据给出的三角形3条边a, b, c（0 < a, b, c < 100,000），计算三角形的周长和面积。

输入描述：
一行，三角形3条边（能构成三角形），中间用一个空格隔开。

输出描述：
一行，三角形周长和面积（保留两位小数），中间用一个空格隔开，输出具体格式详见输出样例。
*/

#include <stdio.h>

int main()
{
    int a,b,c;
    
    scanf("%d %d %d",&a,&b,&c);
    float p = (a+b+c)/2.f;
    printf("circumference=%.2f area=%.2f",(float)(a+b+c),sqrt(p*(p-a)*(p-b)*(p-c)));
    
    return 0;
}

