#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
	char c,m;
	FILE * x = fopen("exp", "r");
	fscanf(x, "%c", &c);
	lseek(3,2,1);
	fflush(x);
	fscanf(x, "%c", &m);
	printf("%c", m);
}
