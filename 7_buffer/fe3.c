#include <stdio.h>
#include <fcntl.h>

int main(){
	FILE *g, *h;
	g = fopen("a", "w");
	fprintf(g, "p");
	// h = fdopen(3, "w");
	h = freopen("b", "w", g);
	printf("%p%p\n", g, h);
	fprintf(g, "p");
	fprintf(h, "q");
	// fflush(h);
}