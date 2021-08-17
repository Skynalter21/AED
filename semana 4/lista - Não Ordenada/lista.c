#include <stdio.h>
#include <stdlib.h>
#define max 10
#include "listanaoordenada.h"

struct lista{
int num[max];
int Fim;
};
Lista *cria_lista (){
Lista *lst;
lst = (Lista*)malloc(sizeof(struct lista));
if (lst!=NULL){
    lst->Fim=0;
}
return lst;
}
int lista_vazia (Lista *lst){
if(lst->Fim==0){
    return 1;
}
else{
    return 0;
}
}
int lista_cheia (Lista *lst){
if(lst->Fim==max){
    return 1;
}
else{
    return 0 ;
}
}
int insere_elem (Lista *lst,int elem){
if (lst==NULL|| lista_cheia(lst)==1){
    return 0;
}
lst->num[lst->Fim]=elem;
lst->Fim++;
return 1;

}
int remove_elem(Lista *lst,int elem){
    if (lst==NULL||lista_vazia(lst)==1){
        return 0;
    }
    int i,j;
    for(i=0;i<lst->Fim;i++){
        if(elem<lst->num[i]){
            return 0;
        }else{
            if(elem==lst->num[i]){
                for(j=i+1;j<lst->Fim;j++){
                    lst->num[j-1]=lst->num[j];
                }
                lst->Fim--;
                break;
            }
        }
    }
    return 1;
}

void imprime_lista (Lista *lst){
int i;
for(i=0;i<lst->Fim;i++){
    printf("%d, ",lst->num[i]);
}

}
int remove_todos (Lista *lst, int elem){
    int i,j,aux=0;
    if(lst==NULL||lista_vazia(lst)==1){
        return 0;
    }
    while(1){
        aux=0;
        for(i=0;i<lst->Fim;i++){
            if(elem==lst->num[i]){
                aux++;
                for(j=i+1;j<lst->Fim;j++){
                    lst->num[j-1]=lst->num[j];
                }
            lst->Fim--;
            break;
            }
        }
        if(aux==0){
            break;
        }
    }
    return 1;
}

void deletar_lista (Lista **lst){

free(*lst);
*lst=NULL;

}
