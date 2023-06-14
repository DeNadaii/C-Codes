// Fazer um programa em "C" que solicite 2 números e informe:
//  a) A soma dos números;
//  b) O produto do primeiro número pelo quadrado do segundo;
//  c) O quadrado do primeiro número;
//  d) A raiz quadrada da soma dos quadrados;
//  e) O seno da diferença do primeiro número pelo segundo;
//  f) O módulo do primeiro número.

#include <stdio.h>
#include <math.h>

int main(){

    int num1, num2;

    printf("informe o primeiro numero\n");
    scanf("%d",&num1);
    printf("informe o segundo numero\n");
    scanf("%d",&num2);

    int sum = num1 + num2;
    int quadradoPrimeiro = pow(num1,2);
    int quadradoSegundo = pow(num2,2);
    int produto = num1*(quadradoSegundo);
    int raizDaSoma = sqrt(quadradoPrimeiro+quadradoSegundo);
    int sinDaDiferença = sin((num1-num2));
    int modulo = fabs(num1);


    printf("%d + %d = %d \n",num1,num2,sum);
    printf("%d * (%d^2) = %d \n",num1,num2,produto);
    printf("%d^2 = %d \n",num1,quadradoPrimeiro);
    printf("sqrt(%d + %d) = %d \n", quadradoPrimeiro, quadradoSegundo, raizDaSoma);
    printf("sin(%d - %d) = %d \n",num1,num2,sinDaDiferença);
    printf("|%d| = %d \n", num1,num1);

    return 0;
}