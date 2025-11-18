#include <stdio.h>

//dato un array di 10 elementi, stamparli.
int main(){
    int valori[10]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<10;i++){
        printf("| %d |",valori[i]);
    }
}