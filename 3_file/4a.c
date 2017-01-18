#include<stdio.h>
#include<fcntl.h>

main(){
	int fd, i=0;
	char c;
	
	fd = open("pqr", O_RDWR);
	while(read(fd, &c, 1)){
		if (c=='a') {
			int i=lseek(fd, -1, SEEK_CUR);
			lseek(fd, i, SEEK_SET);
			write(fd, "K", 1);
		}
	}

}