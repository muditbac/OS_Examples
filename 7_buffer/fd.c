#include <stdio.h>
#include <fcntl.h>

int main(){
	FILE *fs;
	char c,d,e;
	int i=0;
	fs = fopen("exp", "r");
	fscanf(fs, "%c", &c);
	// fflush(fs);

	d='R';
	read(3, &d, 1);
	fscanf(fs, "%c", &e);
	printf("%c%c", c, d);
	printf("%c", e);


}
