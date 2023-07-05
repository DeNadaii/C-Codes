//crie um programa que recebe valor, coloca em um vetor, e indica qual é o menor e o maior
//valor do vetor
#include<stdio.h>

int main(){

    int vetor[10];
    int entrada,maior,menor;

    for (int i = 0; i < 10; i++){
        printf("digite um numero \n");
        scanf("%d",&entrada);
        if (i == 0){
            maior = entrada;
            menor = entrada;
        }else if(entrada > maior){
            maior = entrada;
        }else if (entrada < menor){
            menor = entrada;
        }
        vetor[i] = entrada;
    }
    for (int i = 0; i < 10; i++){
        printf("vetor[%d] = %d\n",i,vetor[i]);
    }
    printf("maior: %d | menor: %d\n",maior,menor);
    return 0;
}