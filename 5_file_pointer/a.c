#include<stdio.h>
#include<fcntl.h>

int main(){

	int fd1, fd2;
	char c,d;

	fd1 = open("exp", O_RDONLY);
	fd2 = open("exp", O_RDONLY);

	lseek(fd1, 2, SEEK_CUR);
	lseek(fd2, 5, SEEK_CUR);

	read(fd1, &c, 1);
	read(fd2, &d, 1);

	printf("%c%c\n", c, d);

}
