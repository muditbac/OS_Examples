#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
    int p[2];
    int i,q;
    char c;
    pipe(p);

    q=fork();

    if (q==0){
        sleep(4);
        write(p[1], "ABC", 3);
        sleep(1);
        close(p[1]);
        sleep(20);printf("childover");
    }
    else {
        // fcntl(p[0], F_SETFL, O_NDELAY);
        sleep(1);
        write(p[1], "PQR", 3);
        close(p[1]);
        for (int i=1;i<=7;i++){
            c='x';
            read(p[0], &c, 1);
            printf("%c", c);
            fflush(stdout);
        }
    }

}
