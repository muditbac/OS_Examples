#include<stdio.h>
#include<unistd.h>



int main(){


	printf("%d %d\n", getpid(),getppid());
	// fork() && fork();
	// fork() || fork();
	// (fork() && fork()) || fork();
	fork() && (fork() || fork());
	printf("%d %d\n", getpid(),getppid());
	sleep(1);

	return 0;
}