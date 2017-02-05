#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

#define value(x) printf("The value of %s is %d\n",#x, x);

int main(){
    value(SEEK_SET);
    value(SEEK_CUR);
    value(SEEK_END);

    value(O_CREAT)
    value(O_RDONLY)
    value(O_WRONLY)
    value(O_RDWR)
    value(O_TRUNC)
    value(O_EXCL)

    sleep(10);
}
