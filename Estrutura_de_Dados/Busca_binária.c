#include <stdio.h>

#define vet_size 10 

// Busca sequencialmente o item dentro do vetor vet. 
// Caso encontrado retorna o índice do item. Caso contrário
// retorna -1.

int buscaSequencial(int vet[vet_size], int item){
    
    for (int i = 0; i < vet_size; i++)
    {
        if(vet[i] == item)  return i;
    }
    return -1;
}
 // Busca recursivamente o item dentro do vetor vector. A cada iteração
 // reduz o espaço de busca pela metade. Quando encontra o item retorna
 // o índice onde ele foi encontrado. Caso contrário retorna -1

int buscaBinariaRecursiva(int vet[vet_size], int inicio, int fim, int item){
    //primeiro verificar se o intervalo existe
    if(inicio > fim) return -1;

    //pegar o meio do vetor
    int i = (inicio + fim)/2;

    // Se o item que estou procurando esta no meio do vetor que separei,
    // ja retorna o endereco
    if (vet[i] == item) return i;
    

    if(vet[i] < item){
        return buscaBinariaRecursiva(vet, i+1, fim, item);
    }else{
        return buscaBinariaRecursiva(vet, inicio, i-1, item);
    }
}


// Busca iterativamente o item dentro do vetor vector. A cada iteração
// reduz o espaço de busca pela metade sem fazer chamadas recursivas.
// Ao encontrar o item retorna seu índice. Caso contrário retorna -1

int buscaBinariaIterativa(int vet[vet_size], int item){
    int inicio = 0;
    int fim = vet_size - 1;

    // Condição de parada
    while (inicio <= fim)
    {
        // meio do subvetor
        int i = (inicio + fim)/2;

        // Item encontrado
        if (vet[i] == item) return i;
        
        if(vet[i] < item){
            inicio = i + 1;
        }else{
            fim =  i - 1;
        } 
    }
    return -1;
}

int main(){

int vector[vet_size] = {5, 23, 27, 30, 39, 45, 56, 71, 80, 92};

    int item = 71;

    printf("Busca Sequencial %d: \t\t%d\n", item,buscaSequencial(vector, item));

    printf("Busca binaria recursiva %d: \t%d\n", item,buscaBinariaRecursiva(vector, 0, vet_size - 1, item));

    printf("Busca binaria iterativa %d: \t%d\n", item,buscaBinariaIterativa(vector, item));
    return 0;
}