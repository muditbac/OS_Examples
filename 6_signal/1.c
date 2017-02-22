#include <stdio.h>
#include <signal.h>

int a=0;
void k(){
  a++;
  if (a==5) signal(SIGINT, SIG_DFL);
}
int main(){
  signal(SIGINT, k);
  while(1);
}
