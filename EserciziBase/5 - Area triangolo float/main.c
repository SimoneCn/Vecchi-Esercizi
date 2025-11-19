#include <stdio.h>
int main()
{
    float base, altezza, area;
    printf("Inserisci la base: ");
    scanf("%d", &base);
    printf("Inserisci l'altezza: ");
    scanf("%d", &altezza);
    area = base * altezza / 2;
    printf("area=%f", area);
}