#include <stdio.h>
#include <pthread.h>

void *f(void *x){
	int i;
	sleep(1);
	for(i=0;i<=5;i++){
		printf("%d\n", i*10);
		sleep(2);
	}
}

main(){
	pthread_t g; int j;
	pthread_create(&g, NULL, f, NULL);
	for(j=1;j<=3;j++){
		printf("%d\n", j+346);
		sleep(2);
	}
	// pthread_join(g, NULL);
	printf("anil\n");
	sleep(2);
}