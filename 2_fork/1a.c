#include<stdio.h>
#include<unistd.h>

using namespace std;


int aork(){
	int p;
	p=fork();
	if (p==0)
		return getppid();
	else return p;
}

int main(){

	int q;
	q = aork();
	printf("%d ", getpid());
	printf("%d ", getppid());
	printf("%d\n", q);
	fork();
	sleep(1);
	return 0;
}