//Q74 Find the transpose of a matrix.//
#include <stdio.h>

int main() {
    int rows, cols, i, j;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int a[rows][cols], t[cols][rows];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);
            
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            t[j][i] = a[i][j];

    printf("Transpose of the matrix:\n");
    for (i = 0; i < cols; i++) {
        for (j = 0; j < rows; j++)
            printf("%d ", t[i][j]);
        printf("\n");
    }
    return 0;
}