#include <stdio.h>
#include <fcntl.h>

int main(){
	int p[2];
	FILE *a,*b;
	char c;
	pipe(p);
	
	a = fdopen(p[1], "w");
	b = fdopen(p[0], "r");
	fprintf(a, "u");
	fflush(a);
	fscanf(b, "%c", &c);
	printf("%c\n", c);
}