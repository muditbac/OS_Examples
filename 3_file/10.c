#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<string.h>
int main(){
    char a[20], b[100];
    scanf("%s %s", a, b);
    int f = open(a, O_APPEND|O_WRONLY);
    int l = strlen(b);
    write(f, b, l);
    return 0;
}
