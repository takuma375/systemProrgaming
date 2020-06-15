#include <unistd.h>

#define BUFFSIZE 1024

int main(void)
{
    char buf[BUFFSIZE];
    ssize_t count;

    count = read(0, buf, BUFFSIZE);
    write(1, buf, count);

    return 0;
}
