//1. Fazer uma função que cacula a enésima potência de uma variável real x:
//f(x, n) = x^n
#include <stdio.h>
#include <math.h>

int calculaPotencia(int x, int n){
    int pot = pow(x,n);
    return pot;
}

int main(){

    int a,b;
    printf("%d",calculaPotencia(4,5));
    
    return 0;
}