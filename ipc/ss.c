#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

#include <pthread.h>

#define N 20 // Number of customers


int seats = 2; // Semaphore
bool barberSleeping = true; // Binary Sleeping
int currentCustomer = 0;

void randwait(int secs) {
    int len;

    // Generate a random number...
    len = (int) ((drand48() * secs) + 1);
    sleep(len);
}

void* barber(void* _){
	while(1){

		if (barberSleeping) printf("Barber is sleeping\n");	

		// Spin Lock
		while(barberSleeping);

		// take a customer
		printf("Barber is cutting hair for customer %d\n", currentCustomer);

		// cut the hair
		randwait(10);

		printf("Hair Cut Done ............... %d\n", currentCustomer);
		barberSleeping=true;

	}
}

void* customer(void* num){
	int id = *((int* )num);

	// customer check if seat is available
	// printf("Waiting for seat to be vacant %d;\n", id);
	if (seats==0){
		printf("No seat available leaving the shop.\n");
		return NULL;
	}

	seats--;
	printf("Seat acquired................ %d;\n", id);
	

	while (!barberSleeping);
	currentCustomer = id;
	barberSleeping=false;
	seats++;
	printf("Barber is taking customer ....%d;\n", id);

	while(!barberSleeping);

	// check if barber is sleeping

}


int main(){

	pthread_t btid;
	pthread_t ctid[N];
	int customer_id[N];
	int i=0;

	for (i=0;i<N;i++){
		customer_id[i] = i;
	}


	pthread_create(&btid, NULL, barber, NULL);
	for (i=0;i<N;i++){
		pthread_create(ctid+i, NULL, customer, customer_id+i);
		randwait(2);
	}

	for (i=0;i<N;i++){
		pthread_join(ctid[i], NULL);
	}

	pthread_join(btid, NULL);

}
