#include <stdio.h>
#include <math.h>
int main()
{
    float principle,rate,time;
    printf("enter principle,rate and time");
    scanf("%f %f %f",&principle,&rate,&time);
    float simple=((principle*rate*time)/100.0);
    float comp=principle*pow(1+(rate/100.0),time)-principle;
    printf("simple interest=%f and compound interest=%f",simple,comp);
    return 0
}