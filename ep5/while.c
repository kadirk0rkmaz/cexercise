/* while.c */
#include <stdio.h>

int main() {
    int flag;
    flag = 0;
    while (flag != 1) {
        printf("Press 1 if you want to quit.\n");
        scanf("%d", &flag);
    }
    printf("Important!\n");    
    return 0;
}