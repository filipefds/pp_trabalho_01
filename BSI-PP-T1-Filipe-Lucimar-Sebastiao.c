// Filipe-Lucimar-Sebastiao

#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define SIZE 10


void * function (void *arg) {
	int *valor = (int *)(arg);

	if (*valor == 1) {
		printf ("Programacao Paralela\n");
	}

	else {
		printf ("Instituto Federal Fluminense.\n");
	}

}

int main () {
	pthread_t t1, t2;
	int a1 = 1;
	int a2 = 2;

	pthread_create(&t1, NULL, function, (void *)(&a1));
	pthread_create(&t2, NULL, function, (void *)(&a2));

	pthread_join(t1, NULL);
	pthread_join(t2, NULL);

	printf ("\n");

	exit(0);
}
