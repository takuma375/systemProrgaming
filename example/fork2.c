#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{
    pid_t pid;

    pid = fork();
    if (pid==0) {
        printf("I'm child\n");
        pid = getpid();
        printf("\tMy pid is %d\n", pid);
        exit(0);
    } else {
        printf("I'm parent.\n\tThe pid of child process is %d\n", pid);
        exit(0);
    }
}
