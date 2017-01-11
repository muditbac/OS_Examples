#include<stdio.h>
#include<unistd.h>

using namespace std;


int cork(){
	int p=0,q=0,r=0;
	int s = getpid();
	p=fork();
	if (p==0){
		q = fork();
		if (q==0) r=fork();
	}
	
	if (p!=0) return p;
	else if (q!=0) return q;
	else if (r!=0) return r;
	else return s;
}

int main(){

	int q;
	q = cork();
	printf("%d ", getpid());
	printf("%d ", getppid());
	printf("%d\n", q);
	fork();
	sleep(10);
	return 0;
}