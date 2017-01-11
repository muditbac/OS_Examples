#include<stdio.h>
#include<unistd.h>

using namespace std;


int main(){

	int i = fork();

	int j=fork();

	if (i!=0 && j!=0) fork();

	printf("%d %d\n", getpid(), getppid());


	sleep(1);

	return 0;
}