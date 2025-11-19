#include <stdio.h>
#define DIM 10

float media(int n[])
{
    float somma = 0;

    for (int i = 0; i < DIM; i++)
    {
        somma += n[i];
        printf("%d \n", n[i]);
    }
    return somma / DIM;
}

int main()
{
    int n[DIM];
    for (int i = 0; i < DIM; i++)
    {
        printf("Inserisci il %d^ numero: ", i + 1);
        scanf("%d", &n[i]);
    }
    printf("La media dei tuoi numeri e' %.2f\n", media(n)); // use %f for float

    return 0;
}
