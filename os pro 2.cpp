#include <stdio.h>
#include <unistd.h>
int main() {
    pid_t pid = fork();
    if (pid == 0) {
        printf("Child process. My process ID is: %d\n", getpid());
        printf("My parent's process ID is: %d\n", getppid());
    } else if (pid > 0) {
        printf("Parent process. My process ID is: %d\n", getpid());
        printf("My child's process ID is: %d\n", pid);
    } else {
        printf("Fork failed!\n");
        return 1;
    }
    return 0;
}
