#include <stdio.h>
#include <fcntl.h>

int main(){
	FILE *fs;
	fs = fopen("exp", "w");
	fprintf(fs, "pqr");
	// fflush(fs);
	write(3,"Y", 1);
}
