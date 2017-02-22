#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

void k(){	
  char c;
  printf("Do you want to terminate?");
  scanf("%c", &c);
  if (c=='0') {kill(getpid(), SIGQUIT);}
}
int main(){
  signal(SIGINT, k);
  while(1);
}
