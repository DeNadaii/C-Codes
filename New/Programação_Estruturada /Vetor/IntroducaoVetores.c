#include <stdio.h>

int main(){
    
    int vetor_1[3];//declarando por indice
    vetor_1[0] = 5;
    vetor_1[1] = 10;
    vetor_1[2] = 15;
    
    int vetor_2[3] = {3,6,9};//declarando e preenchendo na mesma linha
    printf("%i\n", vetor_2[4]);//retorna um valor qualquer pois esta fora do endereco reservado

    int vetor_3[3] = {0};

    for (int i = 0; i < 3; i++)
    {
        printf("vetor_1[%d] = %d\n",i,vetor_1[i]);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("vetor_2[%d] = %d\n",i,vetor_2[i]);
    }
    for (int i = 0; i < 3; i++)//declarando o conteudo do vetor dentro do for
    {   
        vetor_3[i] = i*5;
        printf("vetor_3[%d] = %d\n",i,vetor_3[i]);
    }

    return 0;
}