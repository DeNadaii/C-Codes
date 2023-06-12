// Fazer uma função que calcula o fatorial de um número. Implementar uma
// versão recursiva e uma versão com laço.
#include <stdio.h>

int main(){

    int a;
    int result = 1;

    printf("\nDigite o numero: \n");
    scanf("%d",&a);

    for (int i = a; i > 0; i--)
    {
        result *= i;
    }
    printf("\n%d! = %d",a,result);
    

    return 0;
}