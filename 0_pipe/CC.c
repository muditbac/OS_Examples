#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>


int main(){
    int p[2],i;
    char c;

    // p[0] = open("exp", O_RDONLY);
    // p[1] = open("exp", O_WRONLY);
    pipe(p);
    printf("%d%d", p[0], p[1]);
    write(p[1], "PQR", 3);
    close(p[1]);

    for(i=1;i<=4;i++){
        c='x';
        read(p[0], &c, 1);
        lseek(p[0], 0, SEEK_SET);
        printf("%c", c);
        fflush(stdout);
    }

    sleep(5);
}
