#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(){
    char f[20],c;
    scanf("%s", f);
    int n=0;
    int fd= open(f, O_RDONLY);
    int set=1;
    while(read(fd, &c, 1)){
        if (c=='\n' || c==' ') set=1;
        else{
            if (set==1) n = c-'0', set=0;
            else n = n*10+(c-'0');
        }
    }
    printf("%d", n);
}
