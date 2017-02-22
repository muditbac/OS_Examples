#include <stdio.h>
#include <signal.h>

void k(){
  printf("AA\n");
}
int main(){
  signal(SIGINT, k);
  while(1);
}
