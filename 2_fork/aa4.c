#include<stdio.h>
#include<unistd.h>

// TODO Complete this problem
int aa(){
	return -1;
}

int dork(int n, int offset){
	
	int a=1;
	if (n==0) return -1;

	int b=fork();
	int c=dork(n-1, offset+1);
	if (c!=-1) {
		if (b) return offset;
		else return offset+c;
		
	}

	return 0;
	
}

int main(){

	int q;
	q = dork(2, 1);
	printf("%d ", getpid());
	printf("%d ", getppid());
	printf("%d\n", q);
	sleep(10);
	return 0;
}