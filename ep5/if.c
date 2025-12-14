/* if.c */
#include <stdio.h>

int main() {
    int velocity, limit;
    limit = 80; 
    printf("Please enter your velocity in km/h: ");
    scanf("%d", &velocity);
    
    if (velocity > 100) {
        printf("Please slow down\n");
    } else if (velocity > limit) {
        printf("You are driving safe!\n");
    } else {
        printf("You are very slow\n");
    }
    return 0;
}