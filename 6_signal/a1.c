#include <stdio.h>
#include <signal.h>

void k(){
  printf("AA\n");
  signal(SIGINT, SIG_DFL);
}
int main(){
  signal(SIGINT, k);
  while(1);
}
