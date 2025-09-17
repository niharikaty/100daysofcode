//Q38: Write a program to find the sum of digits of a number.//
#include <stdio.h>

int main() {
    int num, digit, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        digit = num % 10;    
        sum += digit;        
        num = num / 10;       
    }

    // Print result
    printf("Sum of digits = %d\n", sum);

    return 0;
}
