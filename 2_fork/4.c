#include<stdio.h>
#include<unistd.h>

// using namespace std;

int dork(int n){
	if (n==0) return -1;
	// if (n==1) return fork();
	if (n%2==0){
		dork((n)/2);
		return fork();
	} else {
		int p=dork((n-1)/2);
		if (p==0) return fork();
		else return p;
	}
}

int main(){

	int n;
	scanf("%d", &n);

	int q=dork(n);

	printf("%d q=%d\n", getpid(), q);

	sleep(1);
	return 0;
}
