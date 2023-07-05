#include <stdio.h>

int main(){

    unsigned long int numero = 4294967295; // o valor máximo para um inteiro longo sem sinal.
    printf("%lu\n",numero);

    numero = 4294967296; // estouramos a faixa de valores. Voltará ao início da faixa.
    printf("%lu\n",numero);

    numero = -1; // estouramos novamente a faixa. Neste caso, retornará para o fim da faixa.
    printf("%lu\n",numero);
    return 0;
}