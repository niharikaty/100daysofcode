//Q23: Write a program to calculate a library fine based on late days.//

#include <stdio.h>
int main()
{
    int day, fine = 0;
    printf("Enter number of late days: ");
    scanf("%d", &day);
    if (day <= 0) 
    {
        printf("No Fine");
    }
    else if (day <= 5) 
    {
        fine = day * 2;
        printf("Fine %d", fine);
    }
    else if (day <= 10) 
    {
        fine = day * 4;
        printf("Fine %d", fine);
    }
    else if (day <= 30) 
    {
        fine = day * 6;
        printf("Fine %d", fine);
    }
    else 
    {
        printf("Membership Cancelled");
    }

}