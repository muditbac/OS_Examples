#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int main(){

	char c;
	int fd = open("xyz", O_RDONLY);

	while(1){
		int i=read(fd, &c, 1);
		if (i==0) {
			continue;
		}
		printf("%c", c);
		// fflush(stdout);
	}
}