// 4. Fazer um programa que lê um valor, um operador (+,-,*,/) e outro valor e
// imprime o resultado da expressão:
//  <valor 1> <operador> <valor 2>
#include <stdio.h>

//ha duas formas de limpar o buffer. A primeira é simplesmente colocando um espaço antes do %c
//a segunda é usando um scanf sem guarda-la em alguma variavel. Nesse problema usei a primeira

int main(){
    
    int num1,num2;
    char operador;
    char lixo;

    printf("informe o primeiro valor\n");
    scanf("%d",&num1);
    printf("informe o operador \n");
    scanf(" %c",&operador);
    printf("informe o segundo valor\n");
    scanf("%d",&num2);

    // if(operador == 43){
    //     double resultado = num1 + num2;
    //     printf("%d %c %d = %.1lf",num1,operador,num2,resultado);
    // }
    // if(operador == 42){
    //     double resultado = num1 * num2;
    //     printf("%d %c %d = %.1lf",num1,operador,num2,resultado);
    // }
    // if(operador == 45){
    //     double resultado = num1 - num2;
    //     printf("%d %c %d = %.1lf",num1,operador,num2,resultado);
    // }
    // if(operador == 47){
    //     double resultado = num1 / num2;
    //     printf("%d %c %d = %.1lf",num1,operador,num2,resultado);
    // }   

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
        printf("default");
        break;
    } 

    

    return 0;
}