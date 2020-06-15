#include "types.h"
#include "user.h"

char buf[512]

int main(void)
{
    int n;

    n = read(0, buf, sizeof(buf));
    write(1, buf, n);
    exit();

}
