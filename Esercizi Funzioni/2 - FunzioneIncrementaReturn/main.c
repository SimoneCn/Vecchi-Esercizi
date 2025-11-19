#include <stdio.h>

int incrementa(int n)
{
    n = n + 1;
    printf("Il nuovo valore di n e': %d \n", n);
    return n;
}

int main()
{
    int n;
    printf("Inserisci il valore da incrementare: ");
    scanf("%d", &n);
    n = incrementa(n);
    printf("N adesso vale %d", n); // Adesso n viene davvero aggiornato tramite la funzione

    return 0;
}
