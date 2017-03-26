#include <stdio.h>
//#include <stdlib.h>
#include <fcntl.h>

main(){

	stdout = fopen("a", "w");
	printf("R\nTY");//fflush(stdout);
	fprintf(stdout, "KK");
	write(3, "SS", 2);
	write(1, "LP", 2);
}
