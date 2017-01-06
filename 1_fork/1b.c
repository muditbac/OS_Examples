#include <stdio.h>
#include <unistd.h>


int main(){
	printf("%d %d\n", getpid(), getppid());
	int p=getpid();
	fork();
	if (p==getpid()) sleep(1);

	printf("%d %d\n", getpid(), getppid());
	sleep(2);
}
