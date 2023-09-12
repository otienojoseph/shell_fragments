#include <stdio.h>
#include <unistd.h>

int main(void)
{
    pid_t child_proc, parent_proc, pid;

    printf("Before fork\n");
    parent_proc = getppid();
    printf("parent_proc: %u\n", parent_proc);
    pid = fork();
    printf("parent_proc: %u\n", parent_proc);

    if (pid == -1)
    {
        perror("Error");
        return (1);
    }
    printf("After fork\n");
    child_proc = getpid();
    printf("child_proc: %u\n", child_proc);
    return (0);
}
