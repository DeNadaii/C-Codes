#include <stdio.h>

int main(){

    int vetor_1[3];
    vetor_1[0] = 5;
    vetor_1[1] = 10;
    vetor_1[2] = 15;
    printf("%i\n", vetor_1[0]);

    //outra forma de declarar
    int vetor_2[3] = {3,6,9};
    printf("%i\n", vetor_2[0]);
    
    //retorna um valor qualquer pois esta fora do end reservado
    printf("%i\n", vetor_2[4]);

    return 0;
}