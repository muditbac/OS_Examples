#include <stdio.h>
#include <signal.h>
#include <unistd.h>

char c='X';
void f(){
  printf("X\n");
}
void g(){
  printf("Y\n");
}
int main(){
  int x=fork();
  signal(SIGINT, f);
  if (x==0) signal(SIGINT, g);
  while(1);
  
}
