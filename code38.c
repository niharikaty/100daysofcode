#include <stdio.h>

int main() {
    int number;
    int binary[32];  
    int i = 0;       
    printf("Enter a number: ");
    scanf("%d", &number);
    if (number == 0) {
        printf("Binary: 0");
        return 0;
    }

    while (number > 0) {
        binary[i] = number % 2;  
        number = number / 2;     
        i++;                     
    }
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");

    return 0;
}