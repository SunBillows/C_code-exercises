/*
描述
	输入一个整数序列，判断是否是有序序列，有序，指序列中的整数从小到大排序或者从大到小排序。
输入描述：
	第一行输入一个整数N(3≤N≤50)。
	第二行输入N个整数，用空格分隔N个整数。
输出描述：
	输出为一行，如果序列有序输出sorted，否则输出unsorted。

示例1
输入：
5
1 6 9 22 30
输出：
sorted

示例2
输入：
5
3 4 7 2 10
输出：
unsorted

*/

#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i;
    int n;
    
    scanf("%d",&n);
    int *ch = malloc(sizeof(int)*n);
    for(i=0;i<n;i++)
        scanf("%d",&ch[i]);
    for(int j = 2;j<n;j++)
    {
        //判断开头是升序还是降序，进入if表示升序
        if(ch[1]>=ch[0])
        {
            //在循环遍历中如果有不符合的
            if(ch[j]<ch[j-1])
            {
                printf("unsorted\n");
                break;
            }
            //如果在结尾都都是符合的
            else if(j == n-1)
                printf("sorted\n");
        }
        //判断开始是升序还是降序，进入elseif的是降序
        else if(ch[0]>=ch[1])
        {
            if(ch[j]>ch[j-1])
            {
                printf("unsorted\n");
                break;
            }
            else if(j == n-1)
                printf("sorted\n");
        }
    }
    
    return 0;
}

