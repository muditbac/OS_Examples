#include<stdio.h>
#include<unistd.h>

using namespace std;


int main(){

	int i = fork();
	if (i!=0) printf("%d\n", i);

	int j = fork();
	if (j!=0) printf("%d\n", j);
	
	int l=0;
	if (i==0) l=fork();
	else l=-1;
	if (l!=0 && l!=-1) printf("%d\n", l);

	int k=0;
	if (i==0 || j==0 || l==0) k = fork();
	if (k!=0) printf("%d\n", k);


	sleep(1);
	return 0;
}