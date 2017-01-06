#include <stdio.h>
#include <unistd.h>


int main(){
	int i, p= getpid();
	for(i=1;i<=10;i++)
		fork();

	if (p==getpid())
		printf("X");
	if (p==getppid())
		printf("Y");
	// printf("%d\n", getpid());
	sleep(1);
}