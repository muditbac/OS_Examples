#include <stdio.h>
#include <signal.h>

void g(){printf("AA\n");alarm(3);}
int main(){
  alarm(3);
  signal(SIGALRM, g);
  for(;;);
}
