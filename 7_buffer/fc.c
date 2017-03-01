#include <stdio.h>
#include <fcntl.h>

int main(){
	FILE *fs;
	char c,d,e;
	int i=0;
	fs = fopen("exp", "w");

	write(3, "PQRST", 5);
	fprintf(fs, "A");
	lseek(3,2, SEEK_SET);
	fflush(fs);
	write(3,"Z",1);

}
