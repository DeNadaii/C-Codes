#include <stdio.h>
#include <stdlib.h>

// Este programa implementa:

//     1. Um nó encadeado
//     2. Uma PILHA (Stack)


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
}No;

//PILHA (LIFO)
//Last in, first out


//Uma pilha vazia possui topo apontando para NULL
//isso ja limpa a memoria 
void inicializarPilha(No **topo){
    *topo = NULL;
}


//PUSH: colocar um elemento no topo da lista
//uso No **topo pq preciso modificar o ponteiro topo original
void push(No **topo, int valor){
    //o unico lugar q ela pode entrar é no topo 

    //Primeiro crio um novo no
    No *novo = malloc(sizeof(No));
    // malloc() reserva memória dinamicamente.
    // sizeof(No) calcula o tamanho necessário para armazenar um No.

    //Verifico se eu de fato consegui reservar memoria
    if (novo == NULL){
        printf("Erro: nao foi possivel alocar memoria.\n");
        return;
    }

    //Coloco o valor no no que acabei de criar
    novo->valor = valor;
    //O novo no deve apontar pro topo da fila
    novo->prox = *topo;
    //porem o topo mudou, pq adicionei um novo valor
    *topo = novo;
}

//POP: retirar um elemento do topo da pilha
int pop(No **topo){
    //So posso tirar o primeiro elemento, afinal é uma pilha

    //verificar se a pilha esta vazia
    if (*topo == NULL){
        return 0;
    }
    //Primeiro, preciso guarar o endereço do elemento que vai ser removido
    No *temp = *topo; 
    //Preciso guardar o valor tbm
    int valor = temp->valor;
    printf("valor retirado: %d\n",valor); 
    //Agora, preciso avançar o topo
    *topo = temp->prox;
    //agr posso liberar a memoria
    free(temp);

    return 1; // 1 indica q a operacao foi realizada
}

//Simplismente mostrar os elementos da pilha
void mostrarPilha(No *topo){
    printf("\nPilha:\n");
    //Crio um ponteiro auxiliar. Ele percorre a pilha. Enquanto n for NULL
    //ainda ha elementos
    No *atual = topo;

    //percorrendo a pilha
    while (atual != NULL){
        printf("[%d] -> ",atual->valor);
        atual = atual->prox;
    }
    printf("NULL\n");
}

//Como pop() ja esta pronto, so vou chamar pop() ate a pilha ficar vazia
void liberarPilha(No **topo){
    while (pop(topo)){
    }
    

}
int main(void){
    printf("TESTE DA PILHA\n");
    No *topo;
    inicializarPilha(&topo);
    push(&topo, 10);
    push(&topo, 20);
    push(&topo, 30);
    mostrarPilha(topo);
    pop(&topo);

    mostrarPilha(topo);
    liberarPilha(&topo);
    return 0;
}