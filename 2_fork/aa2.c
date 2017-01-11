#include<stdio.h>
#include<unistd.h>

using namespace std;

int aa(){
	return -1;
}

int cork(){
	int p=0,q=0;
	int r = getpid();
	p=fork();
	if (p==0)
		q = fork();
	
	if (p!=0) return p;
	else if (p==0 && q!=0) return q;
	else return r;
}

int main(){

	int q;
	q = cork();
	printf("%d ", getpid());
	printf("%d ", getppid());
	printf("%d\n", q);
	sleep(100);
	return 0;
}