//Q28: Write a program to print the product of even numbers from 1 to n.//

#include <stdio.h>
int main() 
{
    int n, i;
    int prod=1,found=0;
    printf("Enter n");
    scanf("%d", &n);
    for (i = 2; i <= n; i += 2) 
    {
        prod=prod*i;
        found = 1;
    }

    if (found)
        {printf("%d", prod);}
    else
        {printf("No even numbers");}
}