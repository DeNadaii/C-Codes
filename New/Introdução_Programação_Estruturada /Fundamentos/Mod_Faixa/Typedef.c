#include <stdio.h>

typedef unsigned short int ushort;
// a partir de agora você pode usar "ushort" para declarar inteiros curtos sem sinal.
// typedef não precisa estar no início do código.

int main(){
    ushort numero = 10; // um inteiro curto sem sinal.

    printf("numero = %d\n",numero);

    return 0;
}
