#include <stdio.h>
#include <signal.h>

int a=0;
int d=0;
int sum=0;
void k(){
  printf("%d\n", sum);
  kill(getpid(), SIGKILL);
}
int main(){
  signal(SIGFPE, k);
  while(1){
    scanf("%d", &a);
    sum += a;
    d=a/5;
    d=1/d;
    d=a+a;
    printf("%d\n", d);
  }
}
