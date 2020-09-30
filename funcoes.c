//
// Created by Guilherme Guatura 19126 2INFD on 30/09/2020.
//

#include <stdio.h>
#include <stdlib.h>
#include "funcoes.h"

NoFatia * inicializa(){
    return NULL;
}

NoFatia * criaNovaFatia(int h, char t){
    NoFatia * aux = (NoFatia *) malloc(sizeof(NoFatia));
    aux->altura = h;
    aux->tipo = t;
    aux->prox = NULL;
    return aux;
}

NoFatia * insere(NoFatia * l, int h, char t){
    NoFatia * nova = criaNovaFatia(h, t);
    NoFatia * aux=l;
    if(aux!=NULL){
        while(aux->prox!=NULL){
            aux=aux->prox;
        };
        aux->prox=nova;
    }else{
        l=nova;
    }

    return l;
}
