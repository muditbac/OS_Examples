#include<stdio.h>
#include<fcntl.h>



main(){
	int fd,i,j,k;
	char a[10], fn[20];
	char c;
	fd = open("xyz", O_RDWR);
	i=lseek(fd, -4, SEEK_END);
	lseek(fd, i, SEEK_SET);

	read(fd, a, 3);
	
	lseek(fd, 0, SEEK_SET);
	write(fd, a, 3);
	
}