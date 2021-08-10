/*
描述
给定秒数seconds (0< seconds < 100,000,000)，把秒转化成小时、分钟和秒。

输入描述：
一行，包括一个整数，即给定的秒数。

输出描述：
一行，包含三个整数，依次为输入整数对应的小时数、分钟数和秒数（可能为零），中间用一个空格隔开。
*/

int main()
{
    long long seconds;
    int hour,minu,second;
    
    scanf("%lld",&seconds);
    hour = seconds/3600;
    minu = (seconds - hour*3600)/60;
    second = seconds -(hour*3600 + minu*60);
    printf("%d %d %d",hour,minu,second);
    
    return 0;
}

