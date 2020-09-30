#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

int main()
{
    NoFatia * fatias = inicializa();

    fatias = insere(fatias, 3, 'N');
    fatias = insere(fatias, 5, 'N');
    fatias = insere(fatias, 8, 'N');
    fatias = insere(fatias, 6, 'C');
    fatias = insere(fatias, 2, 'N');
    canoNoFinal(fatias);
    impFatias(fatias);

    printf("\nSalto m�ximo : %d\n", SALTO_MAXIMO);
    printf("\nTem fase impossivel? %d\n", faseImpossivel(fatias,SALTO_MAXIMO));
    return 0;
}