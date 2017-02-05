#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
    int p[2];
    int i,n,q;
    pipe(p);
    q=fork();
    if (q==0){
        close(p[0]);
        // sleep(2);
        write(p[1], "AB", 2);
        printf("X");
    } else {
        sleep(1);close(p[0]); printf("Y"); sleep(3);
    }
}
