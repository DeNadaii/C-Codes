#include <stdio.h>

int main(){

    //sizeof é usado para saber o tamanho em bytes do tipe da variavel
    //pode ser usado em variavel ou com a palavra reservada
    double b;
    float c;

    //tamanho em bytes
    printf("sizeof int: %lu\n",sizeof(int));
    printf("sizeof double: %lu\n",sizeof(b));
    printf("sizeof float: %lu\n",sizeof(c));

    return 0;
}