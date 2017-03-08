#include <stdio.h>
#include <fcntl.h>

int main(){
	FILE *fs = fopen("exp", "w");
	int i = 3642;
	fprintf(fs, "p%dkk", i);
	fseek(fs, -1, 2);
	fprintf(fs, "ttt");
	fseek(fs, -2, 1);
	write(3, "ABC", 3);
}