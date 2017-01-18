#include<stdio.h>
#include<fcntl.h>



main(){
	int fd,i,j,k;
	char c;
	fd = open("xyz", O_RDONLY);
	j=lseek(fd, 6, SEEK_SET);
	j=lseek(fd, -2, SEEK_CUR);
	lseek(fd, j, SEEK_SET);

	read(fd, &c, 1);
	printf("%d%c\n", j, c);
	k=lseek(fd, -2, SEEK_END);
	lseek(fd, k, SEEK_SET);
	read(fd, &c, 1);
	printf("%d%c\n", k, c);
}