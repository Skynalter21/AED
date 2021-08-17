typedef struct lista Lista;

Lista *cria_lista ();
int lista_vazia (Lista *lst);
int lista_cheia (Lista *lst);
int insere_ord (Lista *lst,int elem);
int remove_ord (Lista *lst, int elem);
void imprimir_lista (Lista *lst);
int remove_todos(Lista *lst, int elem);
void deletar_lista (Lista **lst);

