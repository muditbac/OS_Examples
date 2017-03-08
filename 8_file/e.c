#include <stdio.h>
#include <fcntl.h>

int main(){
	FILE *g,*h;
	g=fopen("a", "w");
	fprintf(g, "p");
	h=freopen("b", "w", g);
	fprintf(g, "q");
	fprintf(h, "r");

	g=fopen("a", "w");
	g=fopen("b", "w");
	write(3, "p", 1);

}