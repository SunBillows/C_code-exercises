/*
描述
假设你们社团要竞选社长，有两名候选人分别是A和B，社团每名同学必须并且只能投一票，最终得票多的人为社长.
输入描述：
一行，字符序列，包含A或B，输入以字符0结束。
输出描述：
一行，一个字符，A或B或E，输出A表示A得票数多，输出B表示B得票数多，输出E表示二人得票数相等。

示例1
输入：
ABBABBAAB0
输出：#include <stdio.h>
*/


int main()
{
	char ch;
	int i = 0;
	int j = 0;

	while ((ch = getchar()) != EOF)
	{
        if(ch == '0')
            break;
		else if (ch == 'A')
			i++;
		else if (ch == 'B')
			j++;
	}
	if (i > j)
		printf("A\n");
	else if (i < j)
		printf("B\n");
	else
		printf("E\n");

	return 0;
}

/*
int main() 
{
    int a_count = 0, b_count = 0;
    char ch = 0;
    //循环读取投票
    while(scanf("%c", &ch) != EOF) {
        //当前字符为0则退出
        if(ch == '0')
            break;
        //统计a的票数，同理也要统计b的票数
        if(ch == 'A')
            a_count++;
        if(ch == 'B')
            b_count++;
    }
 
    //对a，b的票数进行判断，然后输出对应结果
    if(a_count == b_count)
        printf("E\n");
    else if(a_count > b_count)
        printf("A\n");
    else
        printf("B\n");
    return 0;
}
*/

