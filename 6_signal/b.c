#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

int a,b;
void u(){
  a = 2555/4;
  a++;printf("%dTT\n",a);

}

main(){
  signal(SIGFPE, u);

  scanf("%d", &a);
  b=3/(a++);
  printf("%d\n", b);

}
