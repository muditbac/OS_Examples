#include <stdio.h>
#include <unistd.h>



int main(){

	fork();
	int p = getpid();
	fork();
	if (getpid()==p) fork();
	printf("%d\n", getpid());
}