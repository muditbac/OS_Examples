#include <stdio.h>
#include <signal.h>

void s(){
  kill(getpid(), SIGINT);
}

int main(){
  signal(SIGALRM, s);
  alarm(1);
  while(1) printf("A\n");
}
