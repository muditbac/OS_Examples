#include <stdio.h>
#include <fcntl.h>

int main(){
	FILE *fs;
	int i=0;
	fs = fopen("exp", "w");
	for(i=0;i<4100;i++)
		fprintf(fs, "A");
	write(3, "B", 1);

}
