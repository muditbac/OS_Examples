#include <stdio.h>
#include <unistd.h>



int main(){
	int pp = getpid();
	fork();
	fork();
	int p = getpid();
	fork();
	

	if (getpid()==p && getpid()!=pp) fork();
	
	printf("%d\n", getpid());
	sleep(5);
}