#include <stdio.h>
#include <fcntl.h>
int main(){

	int fd1, fd2, fd3, fd4, fd5;
	char c, d;
	fd1 = open("abc", O_RDONLY);
	fd2 = open("pqr", O_RDONLY);
	fd3 = open("xyz", O_RDONLY);

	printf("%d%d%d", fd1, fd2, fd3);
	read(fd1+2, &c, 1);
	read(4, &d, 1);
	printf("%c%c", c, d);
	close(fd2);

	fd4 = open("1mn", O_RDONLY);
	fd5 = open("stu", O_RDONLY);
	printf("%d%d", fd4, fd5);

}