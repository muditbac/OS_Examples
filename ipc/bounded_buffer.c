#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>

#define BUFFER_SIZE 10

int data[BUFFER_SIZE];

int size;
int out=0;
int in=0;

sem_t mutex;
sem_t empty;
sem_t full;
// sem_t empty;
// sem_t full;

int rand_int(int val) {
    int len;

    // Generate a random number...
    len = (int) ((drand48() * val) + 1);
    
    return len;
}


void consume(int data){
	printf("........... Consuming %d\n", data);
	sleep(rand_int(20));
}

int produce(int p){
	// static int i=0;
	int i=rand_int(2017);
	i++;
	
	sleep(rand_int(4));
	printf("produced %d from %d\n", i, p);

	return i;
}


void* producer(void *_){
	int id = *((int*)_);
	while(1){
		int value = produce(id);
		

		sem_wait(&empty);
		sem_wait(&mutex);

		data[in] = value;
		in = (in+1)%BUFFER_SIZE;

		sem_post(&mutex);
		sem_post(&full);
	}
	

}

void* consumer(void *_){

	while(1){


		
		sem_wait(&full);
		sem_wait(&mutex);

		// Critical Section
		int value = data[out];
		out = (out + 1) % BUFFER_SIZE;

		sem_post(&mutex);
		sem_post(&empty);

		consume(value);
		
	}
}

int main(){
	int value;
	int args[2];

	args[0]=1;args[1]=2;

	pthread_t prod1, cons1;
	pthread_t prod0, cons0;


	sem_init(&mutex, 0, 1);
	sem_init(&full, 0, 0);
	sem_init(&empty, 0, BUFFER_SIZE);
	
	pthread_create(&prod0, NULL, producer, args);
	pthread_create(&prod1, NULL, producer, args+1);
	pthread_create(&cons0, NULL, consumer, NULL);
	pthread_create(&cons1, NULL, consumer, NULL);

	pthread_join(prod0, NULL);

}