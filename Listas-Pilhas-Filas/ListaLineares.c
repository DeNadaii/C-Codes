#include <stdio.h>
#include <stdbool.h>
#define MAX 50

typedef int TIPOCHAVE;

typedef struct {
    TIPOCHAVE chave;
    //Outros campos
}REGISTRO;

typedef struct {
    REGISTRO A[MAX+1];//posicao extra para caber o sentinela caso esteja cheia
    int nroElem;
}LISTA;

void inicializarLista (LISTA* lista){
    lista->nroElem = 0;
}

void exibirLista(LISTA* l){
    int i;
    printf("Lista: \" ");
    for (i = 0; i < l->nroElem; i++)
    {
        printf("%i", l->A[i].chave);
    }
    
    printf("\"\n");   
}

int buscaSquencial(LISTA* l, TIPOCHAVE ch){
    int i = 0;
    while (i < l->nroElem){
        if (ch == l->A[i].chave){
            return i;
        }else{
            i++;
        }
    }
    return -1;
}

bool inserirElemLista(LISTA* l, REGISTRO reg, int i){
    int j;
    if ((l->nroElem == MAX) || (i < 0) || (i > l->nroElem)){
        return false;
    }
    for (j = l->nroElem; j > i; j--){
        l->A[j] = l->A[j-1];
    }
    l->A[i] = reg;
    l->nroElem++;
    return true;
}

bool excluirElemLista(TIPOCHAVE ch, LISTA* l){
    int pos, j;
    pos = buscaSquencial(l,ch);
    //pos = buscaBinaria(l,ch);
    if(pos == -1){
        return false;
    }
    for (j = pos; j < l->nroElem; j++){
        l->A[j] = l->A[j+1];
    }
    l->nroElem--;
    return true;
}

void reinicializarLista(LISTA* l){
    l->nroElem = 0;
}
//metodos melhorados:
int buscaSentinela(LISTA* l, TIPOCHAVE ch){//tomar lugar da busca sequencial
    int i = 0;
    l->A[l->nroElem].chave = ch;
    while (l->A[i].chave != ch){
        if (i==l->nroElem){
            return -1;
        }
        else{
            return i;
        } 
    }
}

bool inserirElemListOrd(LISTA* l, REGISTRO reg){
    if (l->nroElem >= MAX){
        return false;
    }
    int pos = l->nroElem;
    while (pos > 0 && l->A[pos-1].chave > reg.chave){
        l->A[pos] = l->A[pos-1];
        pos--;
    }
    l->A[pos] = reg;
    l->nroElem++;
}

int buscaBinaria(LISTA* l, TIPOCHAVE ch){
    int esq, dir, meio;
    esq = 0;
    dir = l->nroElem-1;

    while (esq <= dir){
        meio = ((esq + dir) / 2);
        if (l->A[meio].chave == ch){
            return meio;
        }
        else{
            if (l->A[meio].chave <= ch){
                esq = meio + 1;
            }
            else{
                dir = meio - 1;
            } 
        }
    }
    return -1;
}
//para exlucir, podemos usar a busca binaria para achar o elem

int main(){
    return 0;
}