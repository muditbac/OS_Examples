#include <stdio.h>
#include <unistd.h>


int main(){
	printf("%d %d\n", getpid(), getppid());
	int p = getpid();
	fork();
	printf("%d %d\n", getpid(), getppid());
	sleep(1);
}
