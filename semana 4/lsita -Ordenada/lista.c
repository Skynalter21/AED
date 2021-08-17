#include <stdio.h>
#include <stdlib.h>
#define max 10
#include "listaordenada.h"

struct lista
{
    int num[max];
    int Fim;
};
Lista *cria_lista ()
{
    Lista *lst;
    lst = (Lista*)malloc(sizeof(struct lista));
    if (lst!=NULL)
    {
        lst->Fim=0;
    }
    return lst;
}
int lista_vazia (Lista *lst)
{
    if(lst->Fim==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int lista_cheia (Lista *lst)
{
    if(lst->Fim==max)
    {
        return 1;
    }
    else
    {
        return 0 ;
    }
}
int insere_ord (Lista *lst,int elem)
{
    if (lst==NULL|| lista_cheia(lst)==1)
    {
        return 0;
    }
    if (lista_vazia(lst) == 1 || elem >= lst->num[lst->Fim-1])
    {
        lst->num[lst->Fim] = elem;
    }
    else
    {
        int i, aux = 0;
        while (elem >= lst->num[aux])
            aux++;
        for (i = lst->Fim; i > aux; i--)
            lst->num[i] = lst->num[i-1];
        lst->num[aux] = elem;
    }
    lst->Fim++;
    return 1;
}

int remove_ord(Lista *lst,int elem)
{
    if (lst == NULL || lista_vazia(lst) == 1 ||
            elem < lst->num[0] || elem > lst->num[lst->Fim-1])
        return 0;
    int i, Aux = 0;
    while (Aux < lst->Fim && lst->num[Aux] < elem)
        Aux++;
    if (Aux == lst->Fim || lst->num[Aux] > elem)
        return 0;
    for (i = Aux+1; i < lst->Fim; i++)
        lst->num[i-1] = lst->num[i];
    lst->Fim--;
    return 1;
}


void imprime_lista (Lista *lst)
{
    if (lst==NULL||lista_vazia(lst)==1)
    {
        printf("Lista invalida\n");
    }
    int i;
    for(i=0; i<lst->Fim; i++)
    {
        printf("%d, ",lst->num[i]);
    }

}
int remove_todos (Lista *lst, int elem)
{
    int i,j,aux=0;
    if(lst==NULL||lista_vazia(lst)==1)
    {
        return 0;
    }
    while(1)
    {
        aux=0;
        for(i=0; i<lst->Fim; i++)
        {
            if(elem==lst->num[i])
            {
                aux++;
                for(j=i+1; j<lst->Fim; j++)
                {
                    lst->num[j-1]=lst->num[j];
                }
                lst->Fim--;
                break;
            }
        }
        if(aux==0)
        {
            break;
        }
    }
    return 1;
}

void deletar_lista (Lista **lst)
{

    free(*lst);
    *lst=NULL;

}

