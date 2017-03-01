#include <stdio.h>
#include <signal.h>
#include <unistd.h>

char c='X';
void f(){
  printf("%d %c\n",getpid(), c);
  kill(getpid(), SIGKILL);
}
int main(){
  int x=fork();
  signal(SIGINT, f);
  if (x==0) c='Y';
  while(1);
  
}
