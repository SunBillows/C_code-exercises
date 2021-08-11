/*
描述
KiKi非常喜欢网购，在一家店铺他看中了一件衣服，他了解到，如果今天是“双11”（11月11日）则这件衣服打7折，“双12” （12月12日）则这件衣服打8折，如果有优惠券可以额外减50元（优惠券只能在双11或双12使用），求KiKi最终所花的钱数。

输入描述：
一行，四个数字，第一个数表示小明看中的衣服价格，第二和第三个整数分别表示当天的月份、当天的日期、第四个整数表示是否有优惠券（有优惠券用1表示，无优惠券用0表示）。

输出描述：
一行，小明实际花的钱数（保留两位小数）。（提示：不要指望商家倒找你钱）
*/

#include <stdio.h>

int main()
{
    float price;
    int month,day,discout;
    
    scanf("%f %d %d %d",&price,&month,&day,&discout);
    if(month==11&&day==11)
    {
        if(discout==1)
        {
            float after = price*0.7-50;
                
            if(after<0)
                printf("0.00");
            else
                printf("%.2f\n",after);
        }
        else
            printf("%.2f\n",price*0.7);
    }
    else if(month==12&&day==12)
    {
        if(discout==1)
        {
            float later = price*0.8-50;
                
            if(later<0)
                printf("0.00");
            else
                printf("%.2f\n",later);
        }
        else
            printf("%.2f\n",price*0.8);
    }
    else
        printf("%.2f\n",price);
    
    return 0;
}

