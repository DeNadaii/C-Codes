// 2. Fazer um programa que imprime a tabela ASCII (código decimal, código hexa,
// caracter) para os códigos de 0 a 127.
#include <stdio.h>

int main(){

    for (int i = 0; i < 127; i++)
    {
        printf("\n");
        printf("%d = %c\t",i,i);
    }
    
    return 0;
}