#include<stdio.h>
#include<unistd.h>

using namespace std;


int bork(){
	int p=0,q=0;
	int r = getpid();
	p=fork();
	if (p!=0)
		q = fork();
	
	if (p!=0 && q!=0) return q;
	else if (p!=0 && q==0) return p;
	else return r;
}

int main(){

	int q;
	q = bork();
	printf("%d ", getpid());
	printf("%d ", getppid());
	printf("%d\n", q);
	sleep(1);
	return 0;
}