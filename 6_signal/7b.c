#include <stdio.h>
#include <signal.h>

char c='Z';
void f(){c='Y';}
int main (){
  signal(SIGINT, f);
  while(1) printf("%c\n", c);
}
