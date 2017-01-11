#include<stdio.h>
#include<unistd.h>

using namespace std;


int main(){

	int n;
	scanf("%d", &n);

	int id=0;
	while(n>0){
		if (n%2) {
			if (id==0) id=fork();
			// n = n-1;
			n = n/2;
		}
		else {
			id=fork();
			n = n/2;
		}
		
	}

	printf("%d\n", getpid());

	sleep(1);
	return 0;
}