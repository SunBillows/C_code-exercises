/*
描述
期中考试开始了，大家都想取得好成绩，争夺前五名。从键盘输入n个学生成绩（不超过40个），输出每组排在前五高的成绩。

输入描述：
两行，第一行输入一个整数，表示n个学生（>=5），第二行输入n个学生成绩（整数表示，范围0~100），用空格分隔。

输出描述：
一行，输出成绩最高的前五个，用空格分隔。
*/


/*
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 0;
    scanf("%d", &n);

    //申请存放数组并输入初始化
    int a[40] = {0};
    for(int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
    }

    int m = 0, index = 0;
    //外循环进行五次筛选，每次筛选出当前最大的数值
    for(int i = 0; i < 5; ++i) {
        //内循环遍历数组中的数值，如果碰到比当前数更大的值则保存起来
        for(int j = 0; j < n; ++j) {
            if(a[j] > m) {
                m = a[j];
                index = j;
            }
        }
        //对最大数置零，防止多次输出，然后输出当前最大值
        a[index] = 0;
        printf("%d ", m);
        m = 0;
    }
    return 0;
}

*/

#include <stdio.h>

int main()
{
    int num;
    int ch[40];
    int i,j=0,n;
    
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&ch[i]);
    }
    
    for(n=0;n<num;n++)
    {
        for(i=0;i<num-n;i++)
        {
            if(ch[i]<ch[i+1])
            {
                j = ch[i];
                ch[i] = ch[i+1];
                ch[i+1] = j;
            }
        }
    }
    
    int s=0;
    for(s=0;s<5;s++)
    {
        printf("%d ",ch[s]);
    }

    return 0;
}

