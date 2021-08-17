/*
描述
	有一个整数序列（可能有重复的整数），现删除指定的某一个整数，输出删除指定数字之后的序列，序列中未被删除数字的前后位置没有发生改变。
输入描述：
	第一行输入一个整数(0≤N≤50)。
	第二行输入N个整数，输入用空格分隔的N个整数。
	第三行输入想要进行删除的一个整数。
输出描述：
	输出为一行，删除指定数字之后的序列。

示例1
输入：
6
1 2 3 4 5 9
4
输出：
1 2 3 5 9

*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,k;
    
    scanf("%d",&n);
    int *ch = malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        scanf("%d",&ch[i]);
    scanf("%d",&k);
    //循环遍历找到要删除数的位置
    for(i=0;i<n;i++)
    {
        //当找到要删除的数时
        if(ch[i] == k)
        {
            ch[i] = 0;
        }
    }
    for(int z=0;z<n;z++)
    {
        if(ch[z]!=0)
            printf("%d ",ch[z]);
    }
    printf("\n");

    return 0;
}
/*
#include<stdio.h>

int main()
{
    int n;
    cin>>n;//输入第一个参数，也就是要输入的数的个数
    int k=0;
    int a[n+1];//防止索引越界，数组定义大一些
    int b[n+1];
    for(int i=0;i<n;++i)
        cin>>a[i];//依次输入数组a的n个数
    int d;
    cin>>d;//输入要删除的数字
    for(int j=0;j<n;++j)
        if(a[j]!=d)//如果不是要删除的数字
            b[k++]=a[j];//存进数组b
    for(int m=0;m<k;++m)
        cout<<b[m]<<" ";
    return 0;
}
*/

