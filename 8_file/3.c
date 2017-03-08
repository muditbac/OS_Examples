#include <stdio.h>
#include <fcntl.h>

int main(){
	int i = 0;
	FILE *fs = fopen("exp", "r+");
	scanf("%d", &i);
	fprintf(fs, "%d", i);
	scanf("%d", &i);
	fprintf(fs, "%d", i);
	fseek(fs, 0, 0);
	fscanf(fs, "%d", &i);
	i=i*2;
	printf("%d\n", i);
}