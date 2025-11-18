#include <stdio.h>
#define DIM 10

//Dati due array v1 e v2, stampare l'array v3 contente la loro somma

void stampaArray(int val[], int size){
    for(int i=0;i<size;i++){
        printf("| %d |",val[i]);
    }
    printf("\n");
}

int main(){
    int v1[DIM],v2[DIM],v3[DIM];
    printf("Riempi il primo array: \n");
    for(int i=0;i<DIM;i++){
        printf("Inserisci il valore %d dell'array 1: ",i+1);
        scanf("%d",&v1[i]);
    }
    printf("Riempi il secondo array: \n");
    for(int i=0;i<DIM;i++){
        printf("Inserisci il valore %d dell'array 2: ",i+1);
        scanf("%d",&v2[i]);
    }

    for(int i=0;i<DIM;i++){
        v3[i]=v1[i]+v2[i];
    }

    stampaArray(v1, DIM);
    stampaArray(v2, DIM);
    stampaArray(v3, DIM);

}