#include<stdio.h>
#include<fcntl.h>

main(){
	int fd,fd2, i=0;
	char c[1];

	char a[10], b[10];
	scanf("%s %s", a, b);	
	fd = open(a, O_RDONLY);
	fd2 = open(b, O_CREAT|O_TRUNC|O_WRONLY);
	while(read(fd, c, 1)){
		write(fd2, c, 1);
	}

}