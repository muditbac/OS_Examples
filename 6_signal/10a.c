#include <stdio.h>
#include <signal.h>
int k=3;
void g(){kill(getpid(), SIGKILL);}
void f(){alarm(3);}
int main(){
  signal(SIGALRM, g);
  signal(SIGINT, f);
  for(;;);
}
