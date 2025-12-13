/* name.c */

#include <stdio.h>

int main() {
    char *name;
    char *surname;
    printf("Hello, what is your name?\n");
    scanf("%s %s", name, surname);
    printf("Hello %s %s\n", name, surname);
    return 0;
}