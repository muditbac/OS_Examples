#include <stdio.h>
#include <signal.h>

int a=0;
int i;
void k(){
  a++;
  for (i=0;i<a;i++) printf("A");
  printf("\n");
}
int main(){
  signal(SIGINT, k);
  while(1);
}
