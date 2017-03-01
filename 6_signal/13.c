#include <stdio.h>
#include <signal.h>
#include <unistd.h>

void a();

char c='X';
void f(){
  printf("X\n");
}
void g(){
  printf("Y\n");
  signal(SIGINT, a);
}
void a(){
  printf("Z\n");
  signal(SIGINT, g);
}

int main(){
  int x=fork();
  signal(SIGINT, f);
  if (x==0) signal(SIGINT, g);
  while(1);
  
}
