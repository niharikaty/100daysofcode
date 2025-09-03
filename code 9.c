#include <stdio.h>

int main() {
    float length, breadth;
    float area, perimeter;

    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the breadth of the rectangle: ");
    scanf("%f", &breadth);
    area = length * breadth;
    perimeter = 2 * (length + breadth);
    printf("Area: %f", area);
    printf("Perimeter: %f", perimeter);

    return 0;
}