#include <stdio.h>
#include <stdlib.h>
#include "recursiva.h"

Lista *cria_lista(){
    return NULL;
}

int vazia (Lista* L){
    if(L == NULL) 
        return 1;
    else 
        return 0;
}

int inser_ord(Lista **L, int element){
    if(vazia(*L) || element <= (*L)->info){
        Lista *N = (Lista*)malloc(sizeof(struct nodo));
        if (N == NULL) return 0;
        N->info = element;
        N->prox = *L;
        *L = N;
        return 1;
    } 

      // (*L)->prox  -> prox é um ponteiro, funcao quer **
      // & na frente = **

    else  
      return inser_ord(&(*L)->prox, element);
}

Lista * get_nod(Lista * L, int element) {

    if ((L == NULL) || (L->info == element))
        return L;

    else 
        return get_nod(L->prox, element);
    
}

void imprime_rec(Lista * L){

    if (vazia(L)) return;
    
    printf("info: %d\n", L->info);

    imprime_rec(L->prox);
    
}

int retira_rec(Lista ** L, int element){
    if(vazia(*L) || element < (*L)->info) return 0;

    if((*L)->info == element){
        Lista* temp = *L;
        *L = temp->prox;
        free(temp);
        return 1;
    }else {
        return retira_rec(&(*L)->prox, element);
    }
}

void libera_rec(Lista ** L){
    if(!vazia(*L)){
        libera_rec(&(*L)->prox);
        free(*L);
    }
    *L = NULL;
}