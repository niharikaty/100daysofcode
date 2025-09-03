#include <stdio.h>

int main() 
{
    int a,i;
    printf("enter number:");
    scanf("%d ,&a");
    int sum=0;
    for (i =1; i <= a; i++)
    {
        sum += i;
    }
    print("the sum is:%d", sum);
    return 0;
}