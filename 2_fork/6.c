#include<stdio.h>
#include<unistd.h>

using namespace std;


int main(){

	int n=0;

	scanf("%d", &n);
	n--;
	
	while(n>0){
		int i = fork();
		int j;
		if (i!=0) j=fork();
		n--;
		if (i!=0 && j!=0) break;
	}
	printf("%d -> %d\n", getpid(), getppid());

	sleep(1);
	return 0;
}