#include <stdio.h>
#include <math.h>

// int calculaPotencia(int x, int n){
//     int pot = pow(x,n);
//     return pot;
// }
int fatorial(int a){ 

    int result = 1;
    
    for (int i = a; i > 0; i--)
    {
        result *= i;
    }
    return result;
}
int main(){

    long double VALORMIN = 0.0000006;
    int x = 1;
    float parcela;
    int i = 1;
    do{
        parcela = pow(x,i)/fatorial(i);
        parcela += parcela;
        i++;
    printf("parcela : %f \n",parcela);
    } while (parcela > VALORMIN) ;

    float resultado = x + 1 + parcela;
    printf("resultado : %f \n",resultado);

 
    return 0;
}