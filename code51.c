//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.//
#include <stdio.h>
int main() {
    int n, i;
    float sum = 0.0
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);

    int numerator = 1;
    int denominator = 1;

    for (i = 1; i <= n; i++) {
        if (denominator != 0) {
            sum += (float)numerator / denominator;
        }

        numerator += 2;
        denominator += 1;
    }
    printf("Sum of the series up to %d terms = %.4f\n", n, sum);

    return 0;
}