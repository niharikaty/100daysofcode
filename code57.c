//50: (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:
*****
 ****
  ***
   **
    *
#include <stdio.h>
int main() {
    int i, j, space;
    for (i = 1; i <= 5; i++) {
        for (space = 1; space < i; space++) {
            printf(" ");
        }
        for (j = 1; j <= 6 - i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}