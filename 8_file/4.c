#include <stdio.h>
#include <fcntl.h>

int main(){
	int i = 0;
	FILE *fs = fopen("exp", "r+");
	fseek(fs, 4, 0);
	fscanf(fs, "%d", &i);
	printf("%d\n", i);
}