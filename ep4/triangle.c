/* triangle.c */
#include <stdio.h>

int main() {
    float base, height, area;
    printf("Enter the base in cm: ");
    scanf("%f", &base);
    printf("Enter the height in cm: ");
    scanf("%f", &height);
    area = base * height * 0.5;
    printf("Area of the triangle in cm square is %f\n", area);
    return 0;
}