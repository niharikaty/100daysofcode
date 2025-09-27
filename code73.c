//Q66 Insert an element in a sorted array at the appropriate position.//
#include <stdio.h>

int main() {
    int n, x, i, pos;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[100];
    printf("Enter %d sorted elements:\n", n);
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to insert: ");
    scanf("%d", &x);
    for (pos = 0; pos < n && arr[pos] < x; pos++);

    for (i = n; i > pos; i--)
        arr[i] = arr[i - 1];
    arr[pos] = x;
    n++;

    printf("Array after insertion:\n");
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    return 0;
}

