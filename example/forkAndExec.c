#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

char commanddir[] = "/bin/";

int main(int argc, char *argv[])
{
    char path[512];
    int ret;

    if (argc < 2) {
        fprintf(stderr, "usage: %s cmd args\n", argv[0]);
        exit(-1);
    }
    argv++;
    strcpy(path, commanddir);
    strcat(path, argv[0]);
    ret = execv(path, argv);
    if (ret < 0){
        perror("exec");
        exit(-1);
    }
}
