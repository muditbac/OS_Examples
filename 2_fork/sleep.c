#include <stdio.h>
#include <unistd.h>

int main(){
	printf("Hello World");
	int p=fork();
	if (p){
		printf("\nSloooot\n");
	}
	else {
		printf("\nasdasd\n");
	}
	sleep(2);
	return 0;
}