#include <stdio.h>
#include <fcntl.h>

int main(){
	int i = 0;
	char c;
	FILE *fs = fopen("exp", "r+");
	while(fscanf(fs, "%c", &c)){
		if (c=='a') {
			fscanf(fs, "%d", &i);
			break;
		}
	}
	printf("%d\n", i);
}