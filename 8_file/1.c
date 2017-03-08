#include <stdio.h>
#include <fcntl.h>

int main(){
	int i = 0;
	scanf("%d", &i);
	FILE *fs = fopen("exp", "r+");
	fseek(fs, 3, 1);
	fprintf(fs, "%d", i);
}