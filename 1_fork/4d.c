#include <stdio.h>
#include <unistd.h>



int main(){
	int p = getpid();
	fork();
	fork();
	if (getpid()!=p) fork();
	printf("%d\n", getpid());
}