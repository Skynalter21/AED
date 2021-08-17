#include <stdio.h>
#include <stdlib.h>
#define max 10
#include "listaordenada.h"


int main()
{
    
    Lista *lst1;
    lst1= cria_lista();

    insere_ord(lst1,4);
    insere_ord(lst1,0);
    insere_ord(lst1,5);
    imprimir_lista(lst1);

    printf("\n");

    Lista *lst2;
    lst2= cria_lista();

    insere_ord(lst2,8);
    insere_ord(lst2,2);
    insere_ord(lst2,6);
    insere_ord(lst2,3);

    imprimir_lista(lst2);

    printf("\n");

  

    return 0;
}
