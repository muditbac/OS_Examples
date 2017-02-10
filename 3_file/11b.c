#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
    char f[20];
    scanf("%s", f);
    int fd = open(f, O_WRONLY);
    write(fd, "x", 1);
    
}
