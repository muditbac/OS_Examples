#include <stdio.h>
#include <unistd.h>


//  Remember /n is important to flush the data
int main(int argc, char const *argv[])
{
	fork();
	fork();
	printf("X\n");
	fork();
	printf("Y\n");
	fork();
	fork();
	fork();
	printf("Z\n");
	// printf("\n");
	sleep(1);
	return 0;
}