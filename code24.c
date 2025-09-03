//Q17: Write a program to find the roots of a quadratic equation and categorize them.//

#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c, disc, r1, r2, realP, imagP;

    printf("Enter coefficients a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    disc = b * b - 4 * a * c;

    if (disc > 0) 
    {
        r1 = (-b + sqrt(disc)) / (2 * a);
        r2 = (-b - sqrt(disc)) / (2 * a);
        printf("Roots are real and different: %f, %f", r1, r2);
    }
    else if (disc == 0) 
    {
        r1 = -b / (2 * a);
        printf("Roots are real and same: %f", r1);
    }
    else
     {
        realP = -b / (2 * a);
        imagP = sqrt(-disc) / (2 * a);
        printf("Roots are complex: %f + %fi , %f - %fi", realP, imagP, realP, imagP);
        return 0
    }
}