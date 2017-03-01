#include <stdio.h>
#include <unistd.h>
main(){
	int i;
	printf("A");
	//fflush(stdout);
	fork();
	printf("B");
}