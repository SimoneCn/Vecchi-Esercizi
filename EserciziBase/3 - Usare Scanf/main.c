#include <stdio.h>
int main()
{
    int voto;
    scanf("%d", &voto);
    if (voto >= 6)
    {
        printf("Sei stato promosso\n");
    }
    else
    {
        printf("Sei stato bocciato\n");
    }
}