/*
描述
学生信息管理系统是学校教学管理的重要工具，现有一名学生基本信息如下：姓名-Jack，年龄-18，性别-Man，请按照输出样例的格式输出该学生的信息。

输入描述：
无

输出描述：
输出分为三行，分别为标题行，分隔行，信息行。
第一行，标题行，每个标题之间间隔4个空格。
第二行，分隔行，一共21个减号"-"。
第三行，信息行，每列输出信息和标题首字母对齐。输出样例如下：
Name Age Gender
---------------------
Jack 18 man
*/

#include <stdio.h>

struct Student
{
    char name[20];
    int age;
    char gender[5];
};

void PRINT(char*s,int a,char* n)
{
    printf("Name    Age    Gender\n");
    printf("---------------------\n");
    printf("%s    %d    %s",s,a,n);
}

int main()
{
    char name[20],gender[5];
    int age;
    
    scanf("%s",&name);
    scanf("%d",&age);
    scanf("%s",&gender);
    
    PRINT(name,age,gender);
    
    return 0;
}

/*
int main()
{
    printf("Name    Age    Gender\n");
    printf("---------------------\n");
    printf("Jack    18     man\n");
    
    return 0;
}
*/

