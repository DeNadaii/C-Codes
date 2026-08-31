#include <stdio.h>
#include <stdlib.h>

// Este programa implementa:

//     1. Um nó encadeado
//     2. Uma FILA (Queue)

// Tudo utilizando:

//     - struct
//     - ponteiros
//     - ponteiro para ponteiro
//     - malloc()
//     - free()
//     - NULL
//     - operador ->

typedef struct No
{
    int valor;
    struct No *prox;
} No;

// FILA (FIFO)
// First in, first out

// Na fila usamos dois ponteiros: inicio e fim
void inicializarFila(No **inicio, No **fim)
{
    // Uma fila vazia possui incio e fim = NULL
    *inicio = NULL;
    *fim = NULL;
}

// enqueue = inserir um elemento no final da fila
// por se tratar de uma fila, o unico lugar q ele pode ser inserido é
// no final da fila
void enqueue(No **incio, No **fim, int valor)
{
    // crio um nó dinamicamente
    No *novo = malloc(sizeof(No));
    // Varifico se a inicializacao funcionou
    if (novo == NULL)
    {
        printf("Erro: nao foi possivel alocar memoria.\n");
        return;
    }
    // Coloco o valor dentro do no
    novo->valor = valor;
    // Como foi criado no final da fila, o ponteiro prox
    // nao aponta para ngm
    novo->prox = NULL;

    // Se a fila esta vazia, o elemente inserido sera, simultaneamente,
    // o inicio e o fim da fila
    // Agora, se a fila NAO esta vazia, o fim precisa ser o novo elemento
    // entao o ponteiro fim precisa apontar pra ele
    if (*incio == NULL)
    {
        *incio = novo;
        *fim = novo;
    }
    else
    {
        (*fim)->prox = novo;
        *fim = novo;
    }
}

int dequeue(No **inicio, No **fim)
{
    // primeiro, verificar se a pilha ta vazia
    if (*inicio == NULL)
    {
        return 0;
    }
    // vou guardar temporariamente o primeiro elemento
    No *temp = *inicio;
    int valor = temp->valor;
    printf("valor retirado: %d\n", valor);
    // Agora tenho q fazer o segundo elemento ser o primeiro
    *inicio = temp->prox;
    // Libero a memoria do antigo primeiro elemento
    free(temp);
    // Pode acontecer de eu ter removido o ultimo elemento da pilha
    // assim, o fim precisa voltar para NULL
    if (*inicio == NULL)
    {
        *fim = NULL;
    }

    return 1;
}

void mostrarFila(No *inicio)
{
    // Ponteiro auxiliar para percorrer a lista
    No *atual = inicio;

    while (atual != NULL)
    {
        printf("[%d] -> ", atual->valor);
        atual = atual->prox;
    }

    printf("NULL\n");
}

// Simplemente dar dequeue ate ela ficar vazia
void liberarFila(No **inicio, No **fim)
{
    while (dequeue(inicio, fim))
    {
    }
}

int main(void)
{
    printf("ESTE DA FILA\n");

    No *inicio;
    No *fim;
    inicializarFila(&inicio, &fim);
    enqueue(&inicio, &fim, 10);
    enqueue(&inicio, &fim, 20);
    enqueue(&inicio, &fim, 30);
    enqueue(&inicio, &fim, 40);
    mostrarFila(inicio);
    dequeue(&inicio, &fim);
    mostrarFila(inicio);
    liberarFila(&inicio, &fim);

    return 0;
}