#include<stdio.h>
#include<unistd.h>

using namespace std;

int aa(){
	return -1;
}

int dork(int n){
	
	int b=n;
	int a=1;
	while (n>0){
		int i = fork();
		
		a++;
		n--;
	}
	return b-a;
}

int main(){

	int q;
	q = dork(2);
	printf("%d ", getpid());
	printf("%d ", getppid());
	printf("%d\n", q);
	sleep(10);
	return 0;
}