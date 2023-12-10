// Desenvolva um programa que leia do usuario uma sequência de números inteiros não nulos
// Quando for digitado o numero 0 o programa deve mostrar a soma dos numeros digitados e depois encerra
#include <stdio.h>

int main()
{

    int entrada, soma;

    do
    {
        printf("Digite um numero: \n");
        scanf(" %d", &entrada);
        soma += entrada;

    } while (entrada != 0);

    printf("soma: %d\n", soma);

    return 0;
}