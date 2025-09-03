//Q18: Write a program to assign grades based on a percentage input.//

#include <stdio.h>
int main()
{
    float percnt;
    printf("enter percentage");
    scanf("%f",&percnt);
    if (percnt<=100 && percnt>=90)
    {
        printf("Grade A1");
    }
    else if (percnt<90 && percnt>=70)
    {
        printf("Grade A");
    }
    else if (percnt<70 && percnt>=60)
    {
        printf("Grade B");
    }
    else if (percnt<60 && percnt>=50)
    {
        printf("grade C");
    }
    else if (percnt<50 && percnt>=30)
    {
        printf("Grade D");
    }
    else
    {
        printf("fail");
        return 0
    }

}