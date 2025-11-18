//Crea un array con dei valori e poi sovrascrivili

#include <stdio.h>
#include <stdlib.h>
#include<time.h>
#define DIM 10

int main()
{
	int i, a[DIM];
	printf("Ecco i primi valori: \n");
	
	srand(time(NULL));
	
	for(i=0; i<DIM; i++){
		printf("a[%d] = %d \n", i, a[i]);
	}
	
	printf("I valori random sono: \n");
	for(i=0; i<DIM; i++){
		a[i]=rand()%100;
		printf("a[%d] = %d \n", i, a[i]);
	}
	
	return 0;
}