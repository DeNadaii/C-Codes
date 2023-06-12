//Fazer um programa em C que imprime uma tabela com a tabuada de 1 a 9

#include <stdio.h>

int main()
{
    int tabuada;
    printf("digite qual a tabuada desejada\n");
    scanf("%d",&tabuada);

    for (int i = 0; i <= 10; i++)
    {
        printf("%d x %d = %d \n",tabuada,i,i*tabuada);
    }
    
    return 0;
}