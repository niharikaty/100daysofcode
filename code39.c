// Write a program to check if a number is a palindrome.//
#include <stdio.h>

int main() {
    int number, originalNumber, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;  
    while (number != 0) {
        remainder = number % 10;         
        reversed = reversed * 10 + remainder; 
        number = number / 10;             
    }

    if (originalNumber == reversed) {
        printf("%d is a palindrome.\n", originalNumber);
    } else {
        printf("%d is not a palindrome.\n", originalNumber);
    }

    return 0;
}
