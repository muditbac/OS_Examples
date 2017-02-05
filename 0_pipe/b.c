#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>


int main(){
    int p[2];
    pipe(p);
    close(p[0]);
    write(p[1], "KLT", 3);
    printf("abc\n");

    sleep(5);
}
