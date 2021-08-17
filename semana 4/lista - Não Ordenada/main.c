#include <stdio.h>
#include <stdlib.h>
#define max 10
#include "listanaoordenada.h"


int main()
{
    Lista *lst;
    int i;
    lst = cria_lista();
    for(i=0; i<10; i++)
    {
        insere_elem(lst,i);
    }
    imprime_lista(lst);
    

    return 0;
}
