#include <stdio.h>
#include <unistd.h>
int main() {
    pid_t child_pid;
    pid_t parent_pid;
    if (child_pid == -1) {
        perror("Fork failed");
        return 1;
    }
    if (child_pid == 0) {
        printf("Child Process:\n");
        printf("PID: %d\n");
        printf("Parent PID: %d\n");
    } else {
        printf("Parent Process:\n");
        printf("PID: %d\n");
    }
    return 0;
}
