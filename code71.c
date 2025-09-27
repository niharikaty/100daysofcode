//Q64Find the digit that occurs the most times in an integer number.//
#include <stdio.h>

int main() {
    long long num;
    int freq[10] = {0}, digit, max = 0, maxDigit = 0;
    printf("Enter an integer: ");
    scanf("%lld", &num);

    if (num < 0) num = -num; 

    while (num > 0) {
        digit = num % 10;
        freq[digit]++;
        num /= 10;
    }

    for (digit = 0; digit < 10; digit++) {
        if (freq[digit] > max) {
            max = freq[digit];
            maxDigit = digit;
        }
    }

    printf("Digit occurring most times: %d (appears %d times)\n", maxDigit, max);
    return 0;
}
