//Q41: Write a program to swap the first and last digit of a number.//
#include <stdio.h>
#include <math.h>

int main() {
    int num, temp, digits = 0;
    int firstDigit, lastDigit, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    lastDigit = temp % 10;

    while (temp != 0) {
        firstDigit = temp;
        temp = temp / 10;
        digits++;
    }
    if (digits == 1) {
        printf("Swapped number: %d", num);
        return 0;
    }
    int middlePart = (num % (int)pow(10, digits - 1)) / 10;

    swappedNum = lastDigit * (int)pow(10, digits - 1) + middlePart * 10 + firstDigit;

    printf("Number after swapping first and last digits: %d\n", swappedNum);

    return 0;
}
