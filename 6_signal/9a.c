#include <stdio.h>
#include <signal.h>
int k=3;
void g(){printf("AA\n");k++;alarm(k);}
int main(){
  alarm(3);
  signal(SIGALRM, g);
  for(;;);
}
