#include <stdio.h>
#include <signal.h>

void a() {printf("%dX\n", getpid());}
void b() {printf("%dY\n", getpid());}

int main(){
  printf("%d\n", getpid());
  int q=fork();
  if (q!=0) signal(SIGINT, a);
  else signal(SIGINT, b);
  for(;;);
}
