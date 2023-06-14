// 1. Faça um programa em "C" que lê dois valores e imprime:
//  - se o primeiro valor for menor que o segundo, a lista de valores do primeiro até o segundo;
//  - se o primeiro valor for maior que o segundo a lista de valores do segundo até o primeiro em ordem decrescente;
//  - se ambos forem iguais a mensagem "valores iguais"
#include <stdio.h>

int main(){

    int num1,num2;

    printf("informe dois valores\n");
    scanf("%d", &num1);
    scanf("%d", &num2);

    if(num1 < num2){
        for (int i = num1; i <= num2; i++)
        {
            printf("lista: %d \n",i);
        }
    }
    if(num1 > num2){
        for (int i = num1; i >= num2; i--)
        {
            printf("lista: %d \n",i);
        }   
    }
    if (num1 == num2)
    {
        printf("numeros iguais");
    }
    

    return 0; 
}