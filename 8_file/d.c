#include <stdio.h>
#include <fcntl.h>

int main(){
	FILE *g,*h;
	g=fopen("a", "w");
	h=fopen("b", "w");
	fclose(g);

	// fclose(h);
	// h=fopen("c", "w");
	freopen("c", "w", h);

	write(3, "y", 1);
	write(4, "z", 1);
}