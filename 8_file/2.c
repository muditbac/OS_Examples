#include <stdio.h>
#include <fcntl.h>

int main(){
	int i = 0;
	char c;
	scanf("%d", &i);
	FILE *fs = fopen("exp", "r+");
	fprintf(fs, "%d", i);
	fseek(fs, 1, 0);
	fscanf(fs, "%c", &c);
	printf("%c\n", c);
}