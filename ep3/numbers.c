/* numbers.c */
#include <stdio.h>

int main() {
    int x, y, result;
    printf("Please input a number: ");
    scanf("%d", &x);
    printf("Please input another number: ");
    scanf("%d", &y);
    result = x + y;
    printf("The result is %d\n", result);
    return 0;
}