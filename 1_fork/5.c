#include <stdio.h>
#include <unistd.h>



int main(){
	int n;
	scanf("%d", &n);

	for(int i=0;i<n-1;i++){
		int p = getpid();
		fork();
		if (p==getpid()) break;
	}
	printf("[%d %d]\n", getpid(), getppid());
	sleep(1);
	return 0;
}