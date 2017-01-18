#include<stdio.h>
#include<unistd.h>



int main(){



	int p,q;
	p=fork();
	q=fork();


	printf("%5d %5d %5d %5d %5d\n", p, q, getpid(), getpgrp() ,getppid());
	sleep(1);

	return 0;
}