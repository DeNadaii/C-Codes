#include <stdio.h>

int main(){
// O programa lê um valor, um operador (+,-,*,/) e outro valor e
// imprime o resultado da expressão:
//  <valor 1> <operador> <valor 2>

    int num1,num2;
    char operador;

    printf("informe o primeiro valor\n");
    scanf("%d",&num1);
    printf("informe o operador \n");
    scanf(" %c",&operador);
    printf("informe o segundo valor\n");
    scanf("%d",&num2);

    double resultado;
    switch (operador)
    {
    case 43:
        resultado = num1 + num2;
        printf("%d %c %d = %.1lf",num1,operador,num2,resultado);
    break;
    case 42:
        resultado = num1 * num2;
        printf("%d %c %d = %.1lf",num1,operador,num2,resultado);
    break;
    case 45:
        resultado = num1 - num2;
        printf("%d %c %d = %.1lf",num1,operador,num2,resultado);
    break;
    case 47:
        double resultado = num1 / num2;
        printf("%d %c %d = %.1lf",num1,operador,num2,resultado);
    break;
    default:
        printf("Operador invalido");
        break;
    } 

    
}