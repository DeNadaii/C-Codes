// Fazer um programa em "C" que pergunte um valor em graus Fahrenheit e
// imprime no vídeo o correspondente em graus Celsius
#include <stdio.h>

int main(){

    int Fahrenheit, Celsius;

    printf("informe o valor em Fahrenheit ");
    scanf("%d",&Fahrenheit);

    Celsius = (Fahrenheit-32.0) * (5.0/9.0);
    printf("temp em celsius %d", Celsius);
    
    return 0;
}