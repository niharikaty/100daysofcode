#include <stdio.h>

int main() {
    float radius;
    float area, circumference;

    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    area = 3.14 * radius * radius;
    circumference = 2 * 3.14 * radius;
    printf("Area: %f\n", area);
    printf("Circumference: %f\n", circumference);

    return 0;
}




