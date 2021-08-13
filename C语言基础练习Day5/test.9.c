/*
衡量人体标注bmi
*/

#include <stdio.h>

int main()
{
    int weight,height;
    
    while(scanf("%d %d",&weight,&height)!=EOF)
    {
        double h = height / 100.f;
        double bmi = weight/(h*h);
        if(bmi<18.5)
            printf("Underweight\n");
        else if(bmi>=18.5&&bmi<=23.9)
            printf("Normal\n");
        else if(bmi>23.9&&bmi<=27.9)
            printf("Overweight\n");
        else 
            printf("Obese\n");
    }
    
    return 0;
}

