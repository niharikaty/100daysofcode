//Q21: Write a program to display the month name and number of days using switch-case for a given month number.//

#include <stdio.h>
int main() 
{
    int month;
    printf("Enter month number");
    scanf("%d", &month);
    switch(month) 
    {
        case 1:
            printf("January, 31 days");
        case 2:
            printf("February, 28 days");
        case 3:
            printf("March, 31 days");
        case 4:
            printf("April, 30 days");
        case 5:
            printf("May, 31 days");
        case 6:
            printf("June, 30 days");
        case 7:
            printf("July, 31 days");
        case 8:
            printf("August, 31 days");
        case 9:
            printf("September, 30 days");
        case 10:
            printf("October, 31 days");
        case 11:
            printf("November, 30 days");
        case 12:
            printf("December, 31 days");
        default:
            printf("Invalid input");
    }
}