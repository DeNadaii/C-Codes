#include <stdio.h>
#include <stdbool.h>

int main()
{
    // operador ternario:
    //(variavel) (ralacional) (variavel) ? (se verdade) : (se falso);

    int numero = 3;

    printf("numero antes %d\n", numero);

    numero >= 5 ? numero++ : numero--;

    printf("numero depois %d\n", numero);

    return 0;
}