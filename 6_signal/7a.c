#include <stdio.h>
#include <signal.h>

void f(){printf("Y\n"); signal(SIGINT, SIG_DFL);kill(getpid(), SIGINT);}
int main (){
  signal(SIGINT, f);
  while(1) printf("Z\n");
}
