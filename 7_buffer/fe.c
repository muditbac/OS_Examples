#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(){
	FILE *fs;
	char c,d,e;
	int i=0;


	fs = fopen("pqr", "r+");
	fscanf(fs, "%c", &c);
	printf("%c", c);
	write(3, "KKKKKK", 6);
	i=lseek(3, -2, SEEK_CUR);
	fscanf(fs, "%c", &c);
	printf("%c", c);fflush(fs);
	fscanf(fs, "%c", &c);
	printf("%c", c);


}
