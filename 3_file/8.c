#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(){
    char f[20];
    int f1,f2;
    char s1, s2;
    // int w1,w2;
    scanf("%s", f);

    f1 = open(f, O_RDWR);
    f2 = open(f, O_RDWR);

    int n = lseek(f2, -1, SEEK_END)+1;
    while (n>1){
        read(f1, &s1, 1);
        read(f2, &s2, 1);
        lseek(f1, -1, SEEK_CUR);
        lseek(f2, -1, SEEK_CUR);
        write(f1, &s2, 1);
        write(f2, &s1, 1);
        lseek(f2, -2, SEEK_CUR);
        n=n-2;
    }

}
