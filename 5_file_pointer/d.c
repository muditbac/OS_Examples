#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>


int main(){
	int fd,p;
	char c='u';
	fd = open("abc", O_RDONLY);
	p=fork();

	if (p==0){
		close(fd);
		read(fd, &c, 1);
		printf("child=%c", c);
	}
	else {
		sleep(1);
		read(fd, &c, 1);
		printf("Parent=%c\n", c);
	}
}
