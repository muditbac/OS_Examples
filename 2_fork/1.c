#include<stdio.h>
#include<unistd.h>

using namespace std;


int main(){

	int p= fork();
	int q= fork();
	if (p==0) fork();
	fork();
	printf("X");
	// fork();

	sleep(1);
	return 0;
}