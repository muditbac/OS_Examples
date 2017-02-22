#include <stdio.h>
#include <signal.h>

int a=0;
int d=0;
int sum=0;
int *p=&d;
void k(){
  p=&sum;
}
int main(){
  signal(SIGINT, k);
  while(1){
    scanf("%d", &a);
    sum += a;
    d=a+a;
    printf("%d\n", *p);
  }
}
