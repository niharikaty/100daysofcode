

#include <stdio.h>
#include <math.h> 

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest;

    printf("Enter Principal amount: ");
    scanf("%f", &principal);

    printf("Enter Rate of Interest (in %% per annum): ");
    scanf("%f", &rate);

    printf("Enter Time (in years): ");
    scanf("%f", &time);
    simpleInterest = (principal * rate * time) / 100;
    compoundInterest = principal * pow((1 + rate / 100), time) - principal;
    printf("Simple Interest = %f", simpleInterest);
    printf("Compound Interest = %f", compoundInterest);

    return 0;
}
