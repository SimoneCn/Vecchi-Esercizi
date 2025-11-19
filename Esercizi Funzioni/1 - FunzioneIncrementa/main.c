#include <stdio.h>

void incrementa(int n)
{
    n = n + 1;
    printf("Il nuovo valore di n e': %d \n", n);
}

int main()
{
    int n;
    printf("Inserisci il valore da incrementare: ");
    scanf("%d", &n);
    incrementa(n);
    printf("N adesso vale %d", n); // La funzione non ha davvero incrementato il valore n

    return 0;
}