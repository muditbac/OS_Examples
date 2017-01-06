#include <stdio.h>
#include <unistd.h>


int main(){

	printf("X\n");
	fork();
	printf("Y\n");
}
