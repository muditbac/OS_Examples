#include <stdio.h>
#include <unistd.h>



int main(){

	int p = getpid();
	fork();
	if (getpid()==p) fork();
	printf("%d\n", getpid());
}