#include<stdio.h>
#include<unistd.h>

using namespace std;


int main(){
	int p, q;
	p = fork();
	fork();
	q = fork();

	if (p==q) printf("X\n");
	else printf("Y\n");
	

	return 0;
}