#include <stdio.h>

// Crea tramite gli array la sequenza di fibonacci

int main(){
    int n;
    printf("Inserisci la grandezza dell'array: ");
    scanf("%d",&n);
    int fibo[n];
    fibo[0]=1;
    fibo[1]=2;
    for(int i=2;i<n;i++){
        fibo[i]=fibo[i-1]+fibo[i-2];
    }

    for (int i=0; i<n; i++)
	{
		printf("| %d |", fibo[i]);
	}
}