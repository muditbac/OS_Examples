#include <stdio.h>
#include <unistd.h>


int main(){

	int p=getpid();
	fork();
	if (p==getpid()) printf("X");
	if (p==getppid()) printf("Y");
	// sleep(1);
}