//Q30: Write a program to reverse a given number.//
#include <stdio.h>

int main() {
    int num, reversed = 0, remainder;
    printf("Enter a number: ");
    scanf("%d", &num);
    while (num != 0) {
        remainder = num % 10;             
        reversed = reversed * 10 + remainder; 
        num /= 10;                       
    }
    printf("Reversed number is: %d", reversed);

    return 0;
}