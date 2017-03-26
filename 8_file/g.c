#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE* a,*b;
	a=fopen("a", "w");
	// b=fdopen(3, "w");
	b=a;
	fprintf(a, "X");
	fprintf(b, "Y");
	fclose(b);
	write(3, "T", 1);

}