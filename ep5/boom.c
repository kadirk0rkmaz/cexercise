/* boom.c */
#include <stdio.h>

int main() {
    int count;
    count = 10;

    while (count != -1) {
        printf("%d\n", count);
        count--;
    }
    printf("BOOM!\n");
    return 0;
}