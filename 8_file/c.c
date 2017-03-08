#include <stdio.h>
#include <fcntl.h>

int main(){
	FILE *g,*b;
	char c;
	
	g = fopen("a", "w");
	write(3, "p", 1);
	freopen("b", "w", g);
	// fclose(g);
	// g = fopen("b", "w");
	write(3, "q", 1);
	write(4, "r", 1);
}