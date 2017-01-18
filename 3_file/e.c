#include<stdio.h>
#include<fcntl.h>



main(){
	int fd1,fd2;
	char c;
	fd1 = open("xyz", O_RDONLY);
	fd2 = open("xyz", O_WRONLY);
	lseek(fd1, 6, SEEK_SET);

	read(fd1, &c, 1);
	write(fd2, &c, 1);
	
}