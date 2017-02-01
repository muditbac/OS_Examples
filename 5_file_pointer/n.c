#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>

int main(){

	char c;
	int fd = open("xyz", O_APPEND|O_WRONLY|O_TRUNC, 0666);

	while(1){
		
		c= getchar();
		write(fd, &c, 1);
	}
}