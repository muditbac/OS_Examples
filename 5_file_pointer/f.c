#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
    int d= open("s", O_CREAT|O_WRONLY|O_TRUNC, 0666);
    printf("%d\n", d);
    write(3, "ab", 2);
    lseek(3, 1, SEEK_SET);
    write(3, "yz", 2);

    sleep(1);
}
