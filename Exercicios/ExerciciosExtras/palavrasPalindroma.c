// Palíndromo, diz-se de ou frase ou palavra que se pode ler,
// indiferentemente, da esquerda para direita ou vice-versa. Exemplos: osso, Ana, radar, Renner,
// Roma é amor, orava o avaro, socorram-me subi no ônibus em Marrocos...
// faça um programa que cheque se a palavra é palíndroma ou não
#include <stdio.h>
#include <string.h>
#define N 20

int main()
{
    char palavra[N];
    printf("Insira uma palavra: ");
    scanf("%s", palavra);
    int tamanho = strlen(palavra);
    for (int i = 0; i < tamanho / 2; i++)
    { // só irá até o meio
        if (palavra[i] != palavra[tamanho - i - 1])
        {
            printf("\nA palavra inserida nao eh um palindromo.");
            return 0;
        }
    }
    printf("\nA palavra inserida eh um palindromo.");
}