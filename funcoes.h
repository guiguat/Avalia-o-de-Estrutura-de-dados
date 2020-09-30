//
// Created by guatu on 30/09/2020.
//

#ifndef INC_2SEM1A_FUNCOES_H
#define INC_2SEM1A_FUNCOES_H
#define SALTO_MAXIMO 6
#define CANO 'C';
#define NORMAL 'N';

struct no{
    char tipo;
    int altura;
    struct no *prox;
};

typedef struct no NoFatia;


NoFatia * inicializa();
NoFatia * criaNovaFatia(int h, char t);
NoFatia * insere(NoFatia * l, int h, char t);

//implementar estas funções
void impFatias(NoFatia * l);
int faseImpossivel(NoFatia* fatias, int puloMaximo);
void canoNoFinal(NoFatia* fatias);
#endif //INC_2SEM1A_FUNCOES_H
