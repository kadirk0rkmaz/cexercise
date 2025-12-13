/* float.c */
#include <stdio.h>

int main() {
    float radius, pi, area;
    pi = 3.14;
    printf("Enter the radius in cm: ");
    scanf("%f", &radius);
    area = radius * radius * pi;
    printf("The area of the circle is %f cm square\n", area);
    return 0;
}