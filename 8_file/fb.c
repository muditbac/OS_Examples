#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

int main(){

	int fd;char c;close(0);
	fd = open("e", O_RDONLY);
	scanf("%c", &c);
	printf("%c", c);
}