// Operador unário “&” ou ponteiro constante ‒ Tem a função de obter o endereço de memória de uma variável.
// Operador unário “*” de indireção ‒ É usado para fazer a deferência.
#include <stdio.h>

int main()
{
    int y = 10;
    int *ponteiro;
    ponteiro = &y;

    // imprime o valor de y
    printf("valor de Y = %d\n", y);
    // agora imprime o endereço de memoria de y
    printf("Endereço de memoria de y = %d\n", ponteiro);
    // imprime oque tem dentro do end de momoria solicitado
    printf("oq tem no endereço de memoria %d ? tem o valor: %d\n", ponteiro, *ponteiro);

    int x = 5;
    *ponteiro = x;
    //mudando o valor usando o end de memoria
    printf("mudando o valor armazenado no end de memoria %d\ para %d\n",ponteiro, y);
    

    return 0;
}