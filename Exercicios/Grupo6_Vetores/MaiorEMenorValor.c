// Fazer um programa em "C" que lê 10 valores e imprime o maior e o menor
// valores lidos.
#include <stdio.h>

int main()
{

    int vetor[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int maior = 0;
    int menor = 999999999;

    for (int i = 0; i < 10; i++)
    {
        if( maior < vetor[i] ){
            maior = vetor[i];
        
        }
        if (menor > vetor[i]){
            menor = vetor[i];
        }
    }
    printf("maior %d\n", maior);
    printf("menor %d\n", menor);
    return 0;
}