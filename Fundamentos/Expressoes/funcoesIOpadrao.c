//funcoes padroes de entrada e saida 
#include <stdio.h>


int main(){

    double pi = 3.14;
    int r;

    printf("digite o raio\n");
    scanf(" %d",&r);
    printf("circuferencia: %.2f", 2*pi*r);

    return 0;
}