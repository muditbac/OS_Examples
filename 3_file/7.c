#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

main(){
	int fd,fd2, i=0;
	char c[1];

	char a[10], b[10];
	scanf("%s %s", a, b);	
	fd = open(a, O_RDONLY);

	fd2 = open(b, O_CREAT|O_TRUNC|O_WRONLY, 0666);
	i = lseek(fd, -1, SEEK_END)+1; // File Size
	
	while(i>0){
		
		read(fd, c, 1);
		printf("%c", c[0]);
		write(fd2, c, 1);

		lseek(fd, -2, SEEK_CUR);
		i--;
	}

}
