#include <stdio.h>
#include <unistd.h>
main(){
	int i;
	for(i=0;i<1030;i++)
		printf("A");
	sleep(3);
	printf("BBB");
}