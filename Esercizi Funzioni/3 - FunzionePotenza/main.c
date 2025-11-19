#include <stdio.h>

int potenza(int n)
{
    n *= n;
    printf("Il nuovo valore di n e': %d \n", n);
    return n;
}

int main()
{
    int n;
    printf("Inserisci di cui vuoi eseguire la potenza: ");
    scanf("%d", &n);
    n = potenza(n);
    printf("N adesso vale %d", n);

    return 0;
}
