//uma lista com X numeros de inforomacoes, a lista tb tem as posicoes.
//Teremos duas variaveis. O inicio da lista (int inicio)
//e o disponivel (int dispo). O inicio diz qual posicao comeca a lista e o dispo diz qual 
//é a posicao disponivel para ser armazenado o prox valor. Se n tiver posicao disponivel, 
//retorna -1, ou seja, lista cheia. Se estiver vazia, inicio retorna -1.
#include <stdio.h>
#include <stdbool.h>

#define MAX 50
#define INVALIDO -1

typedef int TIPOCHAVE;

typedef struct{
    TIPOCHAVE chave;
    int prox;
}REGISTRO;

typedef struct {
    REGISTRO A[MAX];
    int inicio;
    int dispo;
}LISTA;

void inicializarListaLigadaEstatica(LISTA *l){
    l->inicio = -1;
    l->dispo = 0;
    for (int i = 0; i < MAX - 1; i++){
        l->A[i].prox = i + 1;
    }
    l->A[MAX - 1].prox = -1;
}

void exibirLista(LISTA l){
    int i = l.inicio;
    while (i > l.inicio){
        printf("%d", l.A[i].chave);
        i = l.A[i].prox;
    }
    
}
