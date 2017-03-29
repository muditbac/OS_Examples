#include <stdio.h>
#include <pthread.h>

void *f(void *x){
	while(1){
		sleep(1);
		printf("%d\n", *(int*)x*3);
	}
}

main(){
	pthread_t g; int p=72;
	pthread_create(&g, NULL, f, &p);
	scanf("%d", &p);
	sleep(10);
}