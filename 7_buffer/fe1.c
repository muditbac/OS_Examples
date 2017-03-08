#include <stdio.h>
#include <fcntl.h>

int main(){
	char x,m;
	FILE *a = fopen("pqr", "r");
	fscanf(a, "%c%c%c%c", &x, &x, &x, &x);
	lseek(3, 6, SEEK_SET);
	printf("%d\n", fflush(a));
	// fclose(a);
	fscanf(a, "%c", &m);
	read(3, &x, 1);
	printf("%c%c", m, x);
}
