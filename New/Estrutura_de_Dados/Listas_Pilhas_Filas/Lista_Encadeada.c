#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    int valor;
    struct no *proximo;
}no;

no *criar_no(int valor){
    no *novo = malloc(sizeof(no));

    if (novo == NULL)
    {
        printf("erro ao alocar memoria \n");
        exit(1);
    }

    novo -> valor = valor;
    novo -> proximo = NULL;

    return novo;
    
}

void inserir_inicio(no **lista, int valor){
    no *novo = criar_no(valor);
    novo -> proximo = *lista;
    *lista = novo;
}

void inserir_final(no **lista, int valor){
    no *novo = criar_no(valor);

    if (*lista == NULL)
    {
        *lista = novo;
        return;
    }

    no *atual = *lista;
    while (atual->proximo != NULL)
    {
        atual = atual ->proximo;
    }

    atual -> proximo = novo;
}

    void imprimir(no *lista){
        no *atual = lista;

        while (atual != NULL)
        {
            printf("%d->", atual->valor);
            atual = atual-> proximo;
        }
        printf("NULL \n");
    }

    void liberar_lista(no *lista){
        no *atual = lista;
        while (atual != NULL)
        {
            no *proximo = atual->proximo;
            free(atual);
            atual = proximo;
        }
        
    }

int main(){

    no *lista = NULL;

    inserir_inicio(&lista,30);
    inserir_inicio(&lista,20);
    inserir_inicio(&lista,10);

    imprimir(lista);

    return 0;
}