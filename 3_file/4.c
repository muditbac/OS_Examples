#include<stdio.h>
#include<fcntl.h>

main(){
	int fd, i=0;
	char c;
	
	fd = open("pqr", O_WRONLY);
	lseek(fd, 3, SEEK_SET);
	write(fd, "K", 1);

}