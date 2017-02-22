#include <stdio.h>
#include <signal.h>

void g();

void k(){
  printf("AA\n");
  signal(SIGINT, g);
}
void g(){
  printf("BB\n");
  signal(SIGINT, SIG_DFL);
}

int main(){
  signal(SIGINT, k);
  while(1);
}
