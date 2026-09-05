#include <stdio.h>

// Função de busca linear recursiva
int buscaLinearRecursiva(int v[], int tamanho, int item, int indice) {
    
    // Caso base 1: o índice chegou ao fim do vetor (não encontrou)
    if (indice >= tamanho) {
        return -1;
    }
    
    // Caso base 2: o elemento foi encontrado na posição atual
    if (v[indice] == item) {
        return indice;
    }
    
    // Chamada recursiva avançando para o próximo índice
    return buscaLinearRecursiva(v, tamanho, item, indice + 1);
}

int main() {
    int vetor[] = {10, 23, 45, 70, 11, 15};
    int tamanho = 6;
    int item = 70;
    
    // Começa a busca a partir do índice 0   
    printf("Busca Linear Recursiva - item: %d; indice: %d\n", item,buscaLinearRecursiva(vetor, tamanho, item, 0));

    return 0;
}
