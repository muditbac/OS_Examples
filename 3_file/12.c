#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
    char f[20];
    char b[100];
    scanf("%s", f);
    int fd = open(f, O_RDWR);

    int n = lseek(fd, -1, SEEK_END)+1;
    lseek(fd, 0, SEEK_SET);
    read(fd, b, n);
    lseek(fd, 0, SEEK_SET);
    int i=0;
    while(b[i]!=0){
        write(fd, b+i, 1);
        write(fd, "x", 1);
        i++;
    }
}
