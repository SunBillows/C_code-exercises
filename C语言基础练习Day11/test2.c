/*
描述
	小乐乐学校教学楼的电梯前排了很多人，他的前面有n个人在等电梯。电梯每次可以乘坐12人，每次上下需要的时间为4分钟（上需要2分钟，下需要2分钟）。
	请帮助小乐乐计算还需要多少分钟才能乘电梯到达楼上。（假设最初电梯在1层）
输入描述：
	输入包含一个整数n (0 ≤ n ≤ 109)
输出描述：
	输出一个整数，即小乐乐到达楼上需要的时间。

示例1
输入：
1
输出：
2

示例2
输入：
12
输出：
6
*/


#include <stdio.h>

int main()
{
    long n;
    int time=0;
    
    scanf("%ld",&n);
    if(n<12)
        printf("2\n");
    else
    {
        while(n-12>=12)
        {
            time += 4;
            n = n-12;
        }
        printf("%d",time + 6);
    }
    
    return 0;
}

/*
#include<iostream>

using namespace std;
int main()
{
    int n,t=0;
    cin>>n;
    while(n>11)//前面人数大于12人
    {
        n=n-12;//一次上去12个人
        t=t+4;//时间加4分钟
    }
    t=t+2;//自己上去需要2分钟
    cout<<t<<endl;
    return 0;
}

*/

