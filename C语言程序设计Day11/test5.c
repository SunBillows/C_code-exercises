/*
描述
	KiKi和BoBo玩 “井”字棋。也就是在九宫格中，只要任意行、列，或者任意对角线上面出现三个连续相同的棋子，就能获胜。请根据棋盘状态，判断当前输赢。
输入描述：
	三行三列的字符元素，代表棋盘状态，字符元素用空格分开，代表当前棋盘，其中元素为K代表KiKi玩家的棋子，为O表示没有棋子，为B代表BoBo玩家的棋子。
输出描述：
	如果KiKi获胜，输出“KiKi wins!”；
	如果BoBo获胜，输出“BoBo wins!”；
	如果没有获胜，输出“No winner!”。

示例1
输入：
K O B
O K B
B O K
输出：
KiKi wins!
*/


#include <stdio.h>

int main()
{
    char a[3][3];
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            a[i][j]=getchar();
            getchar();
        }
    }
    int flag=0;
    for(i=0;i<3;i++){
        if(a[i][0]=='K'&&a[i][1]=='K'&&a[i][2]=='K'){
            flag=1;
            break;
        }
    }
    for(i=0;i<3;i++){
        if(a[0][i]=='K'&&a[1][i]=='K'&&a[2][i]=='K'){
            flag=1;
            break;
        }
    }
    if(a[0][0]=='K'&&a[1][1]=='K'&&a[2][2]=='K') flag=1;
    if(a[0][2]=='K'&&a[1][1]=='K'&&a[2][0]=='K') flag=1;
    if(a[0][0]=='B'&&a[1][1]=='B'&&a[2][2]=='B') flag=-1;
    if(a[0][2]=='B'&&a[1][1]=='B'&&a[2][0]=='B') flag=-1;
    for(i=0;i<3;i++){
        if(a[i][0]=='B'&&a[i][1]=='B'&&a[i][2]=='B'){
            flag=-1;
            break;
        }
    }
    for(i=0;i<3;i++){
        if(a[0][i]=='B'&&a[1][i]=='B'&&a[2][i]=='B'){
            flag=-1;
            break;
        }
    }
    if(flag==1) printf("KiKi wins!\n");
    else if(flag==0) printf("No winner!\n");
    else printf("BoBo wins!\n");
}

