#include<stdio.h>
#include<unistd.h>


int main(){
	int q;

	printf("%d %d\n", getpid(), getppid());
	q = fork();
	//sleep(1);
	printf("%d %d %d\n", getpid(), getppid(), q);

	return 0;
}