#include <stdio.h>
#include <unistd.h>


int main(int argc, char const *argv[])
{
	fork();
	fork();

	int p=getpid();

	fork();
	fork();
	fork();

	if (p==getpid())
		printf("X\n");
	if (p==getppid())
		printf("Y\n");
	sleep(1);

	return 0;
}