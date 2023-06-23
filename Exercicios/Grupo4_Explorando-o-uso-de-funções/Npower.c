//1. Fazer uma função que cacula a enésima potência de uma variável real x:
//f(x, n) = x^n
#include <stdio.h>
#include <math.h>

int calculaPotencia(int x, int n){
    int pot = x;

    if(n == 0){
        return 1;
    }if(n == 1){
        return x;
    }else{
        for (int i = 1; i < n; i++){
            pot *= x;
        }
    }

    return pot;
}

int main(){

    int a,b;
    printf("%d \n",calculaPotencia(5,1));
    
    return 0;
}