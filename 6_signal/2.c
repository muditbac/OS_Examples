#include <stdio.h>
#include <signal.h>

void g();
int a=0;
void k(){
  printf("AA\n");
  signal(SIGINT, g);
}
void g(){
  printf("BB\n");
  signal(SIGINT, k);
}

int main(){
  signal(SIGINT, k);
  while(1);
}
