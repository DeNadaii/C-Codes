// Fazer um programa que solicita um número decimal e imprime o
// correspondente em hexa e octal.
#include <stdio.h>


int convertToOctal(int n){
    
    int i = 1,a; //i inicializado a 1
    int octal = 0; //octal inicializado a 0

    if(n<=7) {
            octal=n;
        }
        else {
            while(n>=8) {
                a=n%8;
                n=n/8;
                octal = octal + a * i; //calculo do octal
                i *= 10; //aumento do fator de base 10
            }
            n=n%8;
            octal = octal + n * i; //mesmo calculo aqui
        }
    return octal;
};

int main(){
    int d;
    printf("\tEntre com um numero decimal: ");
    scanf("%d", &d);
    printf("\tA conversao do numero %d em hex e %2X:\n \te em oct e: %d", d, d, convertToOctal(d));
    
    return 0;
}