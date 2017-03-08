#include <stdio.h>
#include <fcntl.h>

int main(){

	FILE *x, *y;
	x=fopen("a", "w");
	fprintf(x, "p");
	// fflush(x);
	close(3);
	fopen("b", "w");
}
