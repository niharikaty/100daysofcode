//Q42: Write a program to check if a number is a perfect number.//
#include <stdio.h>

int main() {
    int num, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }

    if (sum == num) {
        printf("%d is a Perfect Number.", num);
    } else {
        printf("%d is NOT a Perfect Number.", num);
    }

    return 0;
}