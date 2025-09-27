//Q73 Find the sum of each row of a matrix and store it in an array.
#include <stdio.h>

int main() {
    int rows, cols, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int a[rows][cols], rowSum[rows];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < rows; i++) {
        rowSum[i] = 0;
        for (j = 0; j < cols; j++)
            rowSum[i] += a[i][j];
    }

    printf("Sum of each row:\n");
    for (i = 0; i < rows; i++)
        printf("Row %d = %d\n", i + 1, rowSum[i]);

    return 0;
}
