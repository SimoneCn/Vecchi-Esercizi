#include <stdio.h>

int calcolaEta(int annoAttuale, int annoNascita)
{
    if (annoNascita > annoAttuale)
    {
        printf("Errore: l'anno di nascita e' maggiore dell'anno attuale!\n");
        return -1; // valore di errore
    }
    return annoAttuale - annoNascita;
}

int main()
{
    int annoAttuale, annoNascita;
    printf("Inserisci l'anno attuale: ");
    scanf("%d", &annoAttuale);
    printf("Inserisci il tuo anno di nascita: ");
    scanf("%d", &annoNascita);

    int eta = calcolaEta(annoAttuale, annoNascita);

    if (eta >= 0)
    {
        printf("La tua eta' e': %d\n", eta);
    }

    return 0;
}