/*
描述
	有个软件系统登录的用户名和密码为（用户名：admin，密码：admin），用户输入用户名和密码，判断是否登录成功。
输入描述：
	多组测试数据，每行有两个用空格分开的字符串，第一个为用户名，第二个位密码。
输出描述：
	针对每组输入测试数据，输出为一行，一个字符串（“Login Success!”或“Login Fail!”）。

示例1
输入：
admin admin
输出：
Login Success!

示例2
输入：
admin abc
输出：
Login Fail!
*/


#include <stdio.h>
#include <string.h>

int main()
{
    //先定义正确的用户名和密码
    char admin[]="admin";
    char code[]="admin";
    //再定义字符串数组
    char str1[10];
    char str2[10];
    
    while(scanf("%s %s",&str1,&str2)!=EOF)
    {
        //将用户名和密码进行比较
        if(!(strcmp(str1,admin)||strcmp(str2,code)))
            printf("Login Success!\n");
        else
            printf("Login Fail!\n");
    }
    
    return 0;
}

