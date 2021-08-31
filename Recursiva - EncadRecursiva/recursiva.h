struct nodo {
    int info;
    struct nodo * prox;
};

typedef struct nodo Lista;

int vazia (Lista* L);

int inser_ord(Lista**
 L, int element);

Lista * get_nod(Lista * L, int element);

void imprime_rec(Lista * L);

int retira_rec(Lista ** L, int element);

void libera_rec(Lista ** L);

Lista *cria_lista();