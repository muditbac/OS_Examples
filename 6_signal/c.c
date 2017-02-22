#include <stdio.h>
#include <signal.h>

void g(){printf("AA\n");alarm(1);}
int main(){
  alarm(3);
  signal(SIGALRM, g);
  for(;;);
}
