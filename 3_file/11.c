#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
    char f[10];
    char s[100];
    scanf("%s", f);

    int fd = open(f, O_RDWR);
    int n = lseek(fd, -1, SEEK_END)+1;
    lseek(fd, 0,SEEK_SET);
    read(fd, s, n);
    lseek(fd, 0, SEEK_SET);
    write(fd, "x", 1);
    write(fd, s, n);
}
