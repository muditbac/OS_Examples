#include<stdio.h>
#include<fcntl.h>

main(){
	int fd, i=0;
	char c;
	
	fd = open("pqr", O_RDONLY);
	while(++i){
		read(fd, &c, 1);
		if (c=='a'){
			printf("%d", i);
			return;
		}
	}
}