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
		sleep(4);
	fork();
	if (p==getppid())
		sleep(2);
	if (p==getppid())
		printf("Y\n");

	sleep(1);

	return 0;
}