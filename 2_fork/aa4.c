#include<stdio.h>
#include<unistd.h>

int dork(int n, int offset){

	if (n==0)
		return offset;

	if (fork()) return dork(n-1, offset);
	else return dork(n-1, offset+1);

}

int main(){

	int q;
	q = dork(3, 1);
	printf("%d ", getpid());
	printf("%d ", getppid());
	printf("%d\n", q);
	sleep(1);
	return 0;
}
