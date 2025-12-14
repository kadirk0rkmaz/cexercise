/* fork.c */
#include <stdio.h>
#include <unistd.h>

int count(int start, int stop);

int count(int start, int stop) {
    for (int i = start; i < stop + 1; i++) {
        printf("%d\n", i);
    }
    printf("The count has been done!\n");
    return 0;
}

int main() {
    int N, pid;
    printf("Please enter a number: ");
    scanf("%d", &N);
    pid = fork();
    if (pid == 0) {
        printf("I'm the child process with PID = %d\n", pid);
        count(N/2+1, N);
    } else {
        printf("I'm the parent process with PID = %d\n", getpid());
        count(1, N/2);
    }
    return 0;
}
