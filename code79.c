// Q72Find the sum of all elements in a matrix.//
#include <stdio.h>

int main() {
    int rows, cols, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int a[rows][cols];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);

    printf("The matrix is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
    return 0;
}