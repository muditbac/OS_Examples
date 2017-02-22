#include <stdio.h>
#include <signal.h>

int t=0;
void k(){
  printf("%d\n", t);
  t=0;
}
int main(){
  signal(SIGINT, k);
  while(1){
    t++;
    sleep(1);
  }
}
