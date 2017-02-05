#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(){

	int fd1, fd2, fd3=-1, p;
	char c;
	fd1 = open("abc", O_RDONLY);
	fd2 = open("pqr", O_WRONLY);
	p=fork();
	if (p==0) close(fd1);
	fd3 = open("xyz", O_RDWR);
	read(3, &c, 1);
	printf("%d %d %c\n", p, fd3, c);
	sleep(1);
}
